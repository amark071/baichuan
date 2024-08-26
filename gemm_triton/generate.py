import json
import random

# 定义可以随机生成的参数范围
param_ranges = {
    "M": (64,2049),
    "N": (64,2049),
    "K": (64,2049)
}

# 生成 100 个随机矩阵参数字典
matrix_params = []
num=[0,0,0,0,0,0]
k=512
n=512
for m in range(256,512,4):
#for _ in range(120):
#    m = random.randint(param_ranges["M"][0], param_ranges["M"][1]) // 16 * 16
#    n = random.randint(param_ranges["N"][0], param_ranges["N"][1]) // 16 * 16
#    k = random.randint(param_ranges["K"][0], param_ranges["K"][1]) // 16 * 16
    #type1 = random.randint(1, 6)
    type1 = 1
    if type1 == 1:
        a="float16"
        b="float16"
        num[0]+=1
    elif type1 == 2:
        a="float32"
        b="float32"
        num[1]+=1
    elif type1 == 3:
        a="bfloat16"
        b="bfloat16"
        num[2]+=1
    elif type1 == 4:
        a="int8"
        b="int8"
        num[3]+=1
    elif type1 == 5:
        a="float16"
        b="int8"
        num[4]+=1
    elif type1 == 6:
        a="bfloat16"
        b="int8"
        num[5]+=1
    param_dict = {
        "M": m,
        "N": n,
        "K": k,
        "ldtype": a,
        "rdtype": b
    }
    matrix_params.append(param_dict)

with open("matrix_config.json", "w") as f:
    json.dump(matrix_params, f, indent=2)

print("JSON file 'matrix_params.json' created successfully.")
print(num)