import torch
import pybind

# 准备输入和输出张量
A = torch.rand(10, 20, dtype=torch.int8)
B = torch.rand(20, 30, dtype=torch.int4)
C = torch.zeros(10, 30, dtype=torch.float16)
D = torch.zeros(10, 30, dtype=torch.float16)
s1 = torch.rand(10, dtype=torch.float32)
s2 = torch.rand(30, dtype=torch.float32)
s3 = torch.rand(1, dtype=torch.float32)
workspace = torch.zeros(1, dtype=torch.int8)

# 调用 qqq_gemm 函数
pybind.qqq_gemm(A, B, C, D, s1, s2, s3, workspace, thread_k=4, thread_n=8, sms=16, max_par=8)

# 使用计算结果
print(C)
print(D)