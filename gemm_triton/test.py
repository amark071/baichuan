import os

# 假设您有一个名为 my_array 的 NumPy 数组,需要输出到 "output.txt" 文件中
my_array = [1, 2, 3, 4, 5]

# 构建完整的文件路径
file_path = os.path.join(os.getcwd(), "output.txt")

try:
    # 尝试读取现有的文件内容
    with open(file_path, "r") as f:
        existing_content = f.read()
except FileNotFoundError:
    # 如果文件不存在,则使用数组创建一个新的 txt 文件
    with open(file_path, "w") as f:
        f.write(str(my_array))
else:
    # 如果文件存在,则将数组转换为字符串,并追加到文件末尾
    with open(file_path, "a") as f:
        f.write("\n" + str(my_array))