import triton
import triton.language as tl

@triton.jit
def my_kernel(output):
    pid = tl.program_id(0)
    output[pid] = pid 

def launch_kernel(output):
    my_kernel[output.shape[0]](output)

output = triton.empty((512,), dtype=triton.float16)
launch_kernel(output)
print(output)