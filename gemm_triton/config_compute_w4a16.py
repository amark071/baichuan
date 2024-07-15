import torch
import sys
import os
import json
import heapq
import triton
import triton.language as tl
from triton.runtime import driver


@triton.jit
def print_tensor_dim(tensor, str_name):
    if tl.program_id(0) == 0 and tl.program_id(1) == 0:
        tl.static_print(str_name," ",tensor.shape," ",tensor.dtype)

@triton.jit
def print_value(value):
    if tl.program_id(0) == 0 and tl.program_id(1) == 0:
        tl.device_print(str(value))

@triton.jit()
def grouped_launch(pid,
                m, n,
                block_m: tl.constexpr, block_n: tl.constexpr, group_m: tl.constexpr):
    
    grid_m = tl.cdiv(m, block_m)
    grid_n = tl.cdiv(n, block_n)

    width = group_m * grid_n
    group_id = pid // width
    group_size = min(grid_m - group_id * group_m, group_m)

    pid_m = group_id * group_m + (pid % group_size)
    pid_n = (pid % width) // group_size

    return pid_m, pid_n

@triton.jit()
def col_major(pid,
              m, n, num_tokens_post_padded,
              block_m: tl.constexpr, block_n: tl.constexpr):
    
    grid_m = tl.cdiv(m, block_m)    
    grid_n = tl.cdiv(n, block_n)
    
    pid_m = (pid % grid_n) 
    pid_n = pid // grid_m

    return pid_m, pid_n