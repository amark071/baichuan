import matplotlib.pyplot as plt
import numpy as np

# 准备数据
torch = [3.363327980041504, 6.864895820617676, 14.0513277053833, 27.665407180786133, 54.96217727661133, 110.39129638671875, 221.33453369140625]
triton = [3.2962560653686523, 6.69593620300293, 13.138943672180176, 26.686464309692383, 53.354496002197266, 105.85088348388672, 212.17791748046875]

# 计算横坐标
x = [i for i in range(9, 16, 1)]

# 绘制图形
plt.figure(figsize=(10, 6))
plt.plot(x, torch, label='torch')
plt.plot(x, triton, label='triton')

# 设置标题和轴标签
plt.title('Comparison of torch & triton')
plt.xlabel('M')
plt.ylabel('time(ms)')
plt.xticks(x, [f'2^{i}' for i in x])
plt.ylim(0, 250)
plt.legend()

# 显示图形
plt.show()