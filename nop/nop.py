import triton
import torch
import triton.language as tl

@triton.jit
def my_kernel(o_ptr,BLOCK_SIZE_M: tl.constexpr):
    pid = tl.program_id(0)
    o = tl.zeros((BLOCK_SIZE_M,), dtype=tl.float32)
    o_ptrs = o_ptr + tl.arange(0, 32)
    tl.store(o_ptrs, o)
def launch_kernel():
    o = torch.empty(32, device='cuda', dtype=torch.float32)
    my_kernel[16,2](o,BLOCK_SIZE_M=32)
    print(o)
launch_kernel()

