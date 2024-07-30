#include <cuda_runtime.h>
#include <stdio.h>

__global__ void simpleKernel(int* output, int input) {
    int tid = blockIdx.x * blockDim.x + threadIdx.x;
    output[tid] = input * 2;
}

int main() {
    int input = 5;
    int* output;
    int* d_output;

    // 在设备上分配内存
    cudaMalloc(&d_output, sizeof(int) * 1024);

    // 在主机上分配内存
    output = (int*)malloc(sizeof(int) * 1024);

    // 在设备上启动内核函数
    simpleKernel<<<32, 32>>>(d_output, input);

    // 将结果从设备拷贝到主机
    cudaMemcpy(output, d_output, sizeof(int) * 1024, cudaMemcpyDeviceToHost);

    // 打印结果
    for (int i = 0; i < 10; i++) {
        printf("output[%d] = %d\n", i, output[i]);
    }

    // 释放内存
    free(output);
    cudaFree(d_output);

    return 0;
}