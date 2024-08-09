import os
import subprocess
import argparse

# 命令参数
kernel_name = "matmul_kernel"

out_name = "kernel"
out_path = os.path.join(os.getcwd(), "kernel")
input_file = os.path.join(os.getcwd(), "kernel.py")
grid = "1024,1,1"

base_signature = "*fp32:16, *fp32:16, *fp32:16, i32,i32,i32, i32,i32, i32,i32, i32,i32"

for num_stages in [4, 5]:
        for block_m in [16,32,64,128]:
            for block_k in [32,64]:
                for block_n in [64,128,256]:
                    for group_m in [4,8,16]:
                        num_warps = 2 if block_n <= 64 else 4
                        signature=base_signature+f",{block_m},{block_n},{block_k},{group_m}"
                        command1 = [
                            "python3",
                            "compile.py",
                            f"--kernel-name={kernel_name}",
                            f"--num-warps={num_warps}",
                            f"--num-stages={num_stages}",
                            f"--signature={signature}",
                            f"--out-name={out_name}",
                            f"--out-path={out_path}",
                            input_file,
                            f"--grid={grid}",
                        ]
                        subprocess.check_call(command1)