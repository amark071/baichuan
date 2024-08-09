import torch
import sys
import os
import json
import heapq
import subprocess
import re
import time
import triton
import triton.language as tl
from triton.runtime import driver

with open("config.json", "r") as f:
    matrix_params = json.load(f)
print(matrix_params)

i = 1
tol = len(matrix_params)
for param_dict in matrix_params:
    if param_dict["ldtype"]=="bfloat16" and param_dict["rdtype"]=="bfloat16":
        command=["python3 compile.py --kernel-name matmul_cache_kernel --signature *fp32:16, *fp32:16, *fp32:16,i32,i32,i32,i32,i32,i32,i32,i32,i32,32,32,32,4 --out-name kernel --out-path $PWD/example/kernel $PWD/cache.py --grid 1024,1,1 "]


    # elif param_dict["ldtype"]=="float16" and param_dict["rdtype"]=="float16":
    #     subprocess.run(["python", "config_compute_fp16.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    # elif param_dict["ldtype"]=="float32" and param_dict["rdtype"]=="float32":
    #     subprocess.run(["python", "config_compute_fp32.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    # elif param_dict["ldtype"]=="int8" and param_dict["rdtype"]=="int8":
    #     subprocess.run(["python", "config_compute_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    # elif param_dict["ldtype"]=="float16" and param_dict["rdtype"]=="int8":
    #     subprocess.run(["python", "config_compute_fp16_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    # elif param_dict["ldtype"]=="bfloat16" and param_dict["rdtype"]=="int8":
    #     subprocess.run(["python", "config_compute_bfp16_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    # else:
    #     continue
        print(f"processing...({i}/{tol})")
    i=i+1