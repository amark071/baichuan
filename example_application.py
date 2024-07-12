import torch
import json
import heapq
import triton
import numpy as np
import triton.language as tl
from triton.runtime import driver
import matplotlib.pyplot as plt

with open('meta_config.json', 'r') as file:
    data = json.load(file)
time_triton=[]
time_torch=[]
rate=[]
for i in range(8,14,1):
    target_M = 2**i
    target_N = 8192
    target_K = 12288

    for item in data:
        if item["M"] == target_M and item["N"] == target_N and item["K"] == target_K:
            print(item)
            break

    result = list(item.values())

    aim_M=result[0]
    aim_N=result[1]
    aim_K=result[2]
    aim_BLOCK_SIZE_M=result[3]
    aim_BLOCK_SIZE_N=result[4]
    aim_BLOCK_SIZE_K=result[5]
    aim_GROUP_SIZE_M=result[6]
    aim_num_warps=result[7]
    aim_num_stages=result[8]


    @triton.jit
    def matmul_kernel(
            a_ptr, b_ptr, c_ptr,
            M, N, K,
            stride_am, stride_ak,
            stride_bk, stride_bn,
            stride_cm, stride_cn,
            BLOCK_SIZE_M: tl.constexpr, BLOCK_SIZE_N: tl.constexpr, BLOCK_SIZE_K: tl.constexpr,
            GROUP_SIZE_M: tl.constexpr,
            ACTIVATION: tl.constexpr
    ):
        pid = tl.program_id(axis=0)
        num_pid_m = tl.cdiv(M, BLOCK_SIZE_M)
        num_pid_n = tl.cdiv(N, BLOCK_SIZE_N)
        num_pid_in_group = GROUP_SIZE_M * num_pid_n
        group_id = pid // num_pid_in_group
        first_pid_m = group_id * GROUP_SIZE_M
        group_size_m = min(num_pid_m - first_pid_m, GROUP_SIZE_M)
        pid_m = first_pid_m + (pid % group_size_m)
        pid_n = (pid % num_pid_in_group) // group_size_m

        offs_am = (pid_m * BLOCK_SIZE_M + tl.arange(0, BLOCK_SIZE_M)) % M
        offs_bn = (pid_n * BLOCK_SIZE_N + tl.arange(0, BLOCK_SIZE_N)) % N
        offs_k = tl.arange(0, BLOCK_SIZE_K)
        a_ptrs = a_ptr + (offs_am[:, None] * stride_am + offs_k[None, :] * stride_ak)
        b_ptrs = b_ptr + (offs_k[:, None] * stride_bk + offs_bn[None, :] * stride_bn)

        accumulator = tl.zeros((BLOCK_SIZE_M, BLOCK_SIZE_N), dtype=tl.float32)
        for k in range(0, tl.cdiv(K, BLOCK_SIZE_K)):
            a = tl.load(a_ptrs, mask=offs_k[None, :] < K - k * BLOCK_SIZE_K, other=0.0)
            b = tl.load(b_ptrs, mask=offs_k[:, None] < K - k * BLOCK_SIZE_K, other=0.0)
            accumulator += tl.dot(a, b)
            a_ptrs += BLOCK_SIZE_K * stride_ak
            b_ptrs += BLOCK_SIZE_K * stride_bk
        if ACTIVATION == "leaky_relu":
            accumulator = leaky_relu(accumulator)
        c = accumulator.to(tl.float16)

        offs_cm = pid_m * BLOCK_SIZE_M + tl.arange(0, BLOCK_SIZE_M)
        offs_cn = pid_n * BLOCK_SIZE_N + tl.arange(0, BLOCK_SIZE_N)
        c_ptrs = c_ptr + stride_cm * offs_cm[:, None] + stride_cn * offs_cn[None, :]
        c_mask = (offs_cm[:, None] < M) & (offs_cn[None, :] < N)
        tl.store(c_ptrs, c, mask=c_mask)

    @triton.jit
    def leaky_relu(x):
        x = x + 1
        return tl.where(x >= 0, x, 0.01 * x)
    def matmul(a, b, activation=""):

        assert a.shape[1] == b.shape[0], "维度符合矩阵相乘要求"
        assert a.is_contiguous(), "矩阵A必须是连续的"
        assert b.is_contiguous(), "矩阵B必须是连续的"
        M, K = a.shape
        K, N = b.shape

        c = torch.empty((M, N), device=a.device, dtype=a.dtype)
    
        grid = lambda META: (triton.cdiv(M, META['BLOCK_SIZE_M']) * triton.cdiv(N, META['BLOCK_SIZE_N']), )
        matmul_kernel[grid](
            a, b, c,
            M, N, K,
            a.stride(0), a.stride(1),
            b.stride(0), b.stride(1),
            c.stride(0), c.stride(1),
            BLOCK_SIZE_M=aim_BLOCK_SIZE_M,
            BLOCK_SIZE_N=aim_BLOCK_SIZE_N,
            BLOCK_SIZE_K=aim_BLOCK_SIZE_K,
            GROUP_SIZE_M=aim_GROUP_SIZE_M,
            num_warps=aim_num_warps,
            num_stages=aim_num_stages,
            ACTIVATION=activation
        )
        return c


    quantiles = [0.5, 0.2, 0.8]
    a = torch.randn((target_M,12288), device='cuda', dtype=torch.float16)
    b = torch.randn((12288,8192), device='cuda', dtype=torch.float16)
    ms, min_ms, max_ms = triton.testing.do_bench(lambda: matmul(a, b), quantiles=quantiles)
    ms1, min_ms1, max_ms1 = triton.testing.do_bench(lambda: torch.matmul(a, b), quantiles=quantiles)
    print(f"for M={target_M}")
    print('with triton, we reach the results using:')
    print(ms)
    print('with torch, we reach the results using:')
    print(ms1)
    print('speed up rate:')
    print((ms1-ms)*100/ms1)

    time_triton.append(ms)
    time_torch.append(ms1)
    rate.append((ms1-ms)*100/ms1)

print(time_torch)
print(time_triton)

x = np.arange(8,14,1)
fig, ax = plt.subplots(figsize=(12, 6))
ax.plot(x, time_triton, label='triton')
ax.plot(x, time_torch, label='torch')
ax.set_title('triton vs torch')
ax.set_xlabel('M')
ax.set_ylabel('Time')
ax.legend()
plt.show()

x = np.arange(8,14,1)
fig, ax = plt.subplots(figsize=(12, 6))
ax.plot(x,rate, label='triton')
ax.set_title('triton vs torch')
ax.set_xlabel('M')
ax.set_ylabel('Speed up rate')
ax.legend()
plt.show()

print(sum(time_triton))
print(sum(time_torch))