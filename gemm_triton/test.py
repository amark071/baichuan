import json
import subprocess
import re
import time
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
print(result)

labels = ['M', 'N', 'K', 'ldtype', 'rdtype', 'BLOCK_SIZE_M', 'BLOCK_SIZE_N', 'BLOCK_SIZE_K', 'GROUP_SIZE_M', 'num_warps', 'num_ctas','num_stages']

# 将数组转换为字典列表
data = []
for row in result:
    if row!=[]:
        row_dict = {}
        for i, label in enumerate(labels):
            row_dict[label] = row[i]
        data.append(row_dict)
print(data)
# 将字典列表输出为 JSON 格式并保存到文件
with open('config.json', 'w') as f:
    json.dump(data, f, indent=4)
print("All qualifying matrix parameters have been processed.")