import torch
import sys
import os
import json
import heapq
import triton
import triton.language as tl
from triton.runtime import driver

def init_to_zero(name):
    return lambda nargs: nargs[name].zero_()

def get_configs_io_bound():
    configs = []
    for num_stages in [4, 5]:
        for block_m in [16,32,64,128]:
            for block_k in [32,64]:
                for block_n in [64,128,256]:
                    for group_m in [4,8,16]:
                        num_warps = 2 if block_n <= 64 else 4
                        configs.append(
                            triton.Config({'BLOCK_SIZE_M': block_m, 'BLOCK_SIZE_N': block_n, 'BLOCK_SIZE_K': block_k, 'GROUP_SIZE_M':group_m},
                                      num_stages=num_stages, num_warps=num_warps))
    return configs

configs = get_configs_io_bound()
device = torch.cuda.current_device()
capability = torch.cuda.get_device_capability()
a = torch.randint(low=-128, high=127, size=(512,512), dtype=torch.int16, device='cuda')
dtsize = a.element_size()
dtype = a.dtype
pruned_configs = []
for config in configs:
    kw = config.kwargs
    BLOCK_M, BLOCK_N, BLOCK_K, num_stages = \
        kw['BLOCK_SIZE_M'], kw['BLOCK_SIZE_N'], kw['BLOCK_SIZE_K'], config.num_stages

    max_shared_memory = driver.utils.get_device_properties(device)["max_shared_mem"]
    required_shared_memory = (BLOCK_M + BLOCK_N) * BLOCK_K * num_stages * dtsize
    if required_shared_memory <= max_shared_memory:
        pruned_configs.append(config)

configs = pruned_configs
configs_map = {}
for config in configs:
    kw = config.kwargs
    BLOCK_M, BLOCK_N, BLOCK_K, SPLIT_K, num_warps, num_stages = \
        kw['BLOCK_SIZE_M'], kw['BLOCK_SIZE_N'], kw['BLOCK_SIZE_K'],kw['GROUP_SIZE_M'], config.num_warps, config.num_stages

    key = (BLOCK_M, BLOCK_N, BLOCK_K, SPLIT_K, num_warps)
    if key in configs_map:
        configs_map[key].append((config, num_stages))
    else:
        configs_map[key] = [(config, num_stages)]

pruned_configs = []
for k, v in configs_map.items():
    BLOCK_SIZE_M, BLOCK_SIZE_N, BLOCK_SIZE_K, GROUP_SIZE_M, num_warps = k
    if capability[0] >= 8:
        # compute cycles (only works for ampere GPUs)
        mmas = BLOCK_M * BLOCK_N * BLOCK_K / (16 * 8 * 16)
        mma_cycles = mmas / min(4, num_warps) * 8

        ldgsts_latency = 300  # Does this matter?
        optimal_num_stages = ldgsts_latency / mma_cycles

        # nearest stages, prefer large #stages
        nearest = heapq.nsmallest(2, v, key=lambda x: 10 + abs(x[1] - optimal_num_stages)
                                    if (x[1] - optimal_num_stages) < 0 else x[1] - optimal_num_stages)

        for n in nearest:
            pruned_configs.append(n[0])
    else:  # Volta & Turing only supports num_stages <= 2
        random_config = v[0][0]
        random_config.num_stages = 2
        pruned_configs.append(random_config)
print(len(pruned_configs))