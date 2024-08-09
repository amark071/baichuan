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
    cudaMalloc(&d_output, sizeof(int) * 16);
    output = (int*)malloc(sizeof(int) * 16);
    simpleKernel<<<4, 4>>>(d_output, input);
    cudaMemcpy(output, d_output, sizeof(int) * 16, cudaMemcpyDeviceToHost);
    for (int i = 0; i < 16; i++) {
        printf("output[%d] = %d\n", i, output[i]);
    }
    free(output);
    cudaFree(d_output);
    return 0;
}