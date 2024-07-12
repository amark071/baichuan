import torch
M=960
N=1840
K=1408
matrix1 = torch.randn(M,K)
matrix2 = torch.randn(K,N)
with open('A.txt', 'w') as file:
    for row in matrix1:
        row_str = [f"{x:.2f}" for x in row]
        file.write(','.join(row_str) + '\n')
with open('B.txt', 'w') as file:
    for row in matrix2:
        row_str = [f"{x:.2f}" for x in row]
        file.write(','.join(row_str) + '\n')