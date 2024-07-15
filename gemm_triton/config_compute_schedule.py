import json
import subprocess
import re
import time
start_time = time.time()
with open("matrix_config.json", "r") as f:
    matrix_params = json.load(f)

i = 1
tol = len(matrix_params)
for param_dict in matrix_params:
    if param_dict["ldtype"]=="bfloat16" and param_dict["rdtype"]=="bfloat16":
        subprocess.run(["python", "config_compute_bfp16.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    elif param_dict["ldtype"]=="float16" and param_dict["rdtype"]=="float16":
        subprocess.run(["python", "config_compute_fp16.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    elif param_dict["ldtype"]=="float32" and param_dict["rdtype"]=="float32":
        subprocess.run(["python", "config_compute_fp32.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    elif param_dict["ldtype"]=="int8" and param_dict["rdtype"]=="int8":
        subprocess.run(["python", "config_compute_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    elif param_dict["ldtype"]=="float16" and param_dict["rdtype"]=="int8":
        subprocess.run(["python", "config_compute_fp16_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    elif param_dict["ldtype"]=="bfloat16" and param_dict["rdtype"]=="int8":
        subprocess.run(["python", "config_compute_bfp16_int8.py", str(param_dict["M"]), str(param_dict["N"]), str(param_dict["K"])], check=True)
    else:
        continue
    print(f"processing...({i}/{tol})")
    i=i+1

file_path = 'output.txt'
with open(file_path, 'r') as file:
    lines = file.readlines()
result = []
for line in lines:
    items = re.findall(r'\d+|\w+', line)
    row = []
    for item in items:
        if item.isdigit():
            row.append(int(item))
        else:
            row.append(item)
    result.append(row)

labels = ['M', 'N', 'K', 'ldtype', 'rdtype', 'BLOCK_SIZE_M', 'BLOCK_SIZE_N', 'BLOCK_SIZE_K', 'GROUP_SIZE_M', 'num_warps', 'num_stages']

# 将数组转换为字典列表
data = []
for row in result:
    row_dict = {}
    for i, label in enumerate(labels):
        row_dict[label] = row[i]
    data.append(row_dict)

# 将字典列表输出为 JSON 格式并保存到文件
with open('config.json', 'w') as f:
    json.dump(data, f, indent=4)
print("All qualifying matrix parameters have been processed.")

end_time = time.time()
compute_time = end_time - start_time
print(f"Computation time: {compute_time:.4f} seconds")