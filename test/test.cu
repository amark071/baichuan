#include <iostream>
#include <cuda.h>


// 检查CUDA错误的宏
#define checkCudaErrors(err) {\
    if(err != CUDA_SUCCESS) {\
    const char *errorName;\
    const char *errorString;\
    cuGetErrorName(err, &errorName);\
    cuGetErrorString(err, &errorString);\
    std::cerr << "CUDA Error: " << errorName << ": " << errorString << std::endl;\
    exit(EXIT_FAILURE);}\
}

int main() {
    CUdevice device;
    CUcontext context;
    CUmodule module;
    CUfunction kernel;
    CUresult err;

    // 初始化CUDA驱动API
    err = cuInit(0);
    if(err==CUDA_SUCCESS) std::cout<<1<<' ';
    checkCudaErrors(err);

    // 获取第一个设备
    err = cuDeviceGet(&device, 0);
    if(err==CUDA_SUCCESS) std::cout<<2<<' ';
    checkCudaErrors(err);

    // 创建上下文
    err = cuCtxCreate(&context, 0, device);
    if(err==CUDA_SUCCESS) std::cout<<3<<' ';
    checkCudaErrors(err);

    // 加载模块
    err = cuModuleLoad(&module, "matmul_cache_kernel.cubin");
    if(err==CUDA_SUCCESS) std::cout<<4<<' ';
    checkCudaErrors(err);

    // 获取内核函数
    err = cuModuleGetFunction(&kernel, module, "matmul_cache_kernel_0d1d2d");
    if(err==CUDA_SUCCESS) std::cout<<5<<' ';
    checkCudaErrors(err);

    // 定义输入和输出数据
    float h_A[512][512];
    float h_B[512][512];
    float h_C[512][512];
    float* d_A=nullptr;
    float* d_B=nullptr;
    float* d_C=nullptr;

    int M=512;
    int N=512;
    int K=512;
    // 初始化
    for (int i = 0; i < 512; i++) 
    {
        for(int j = 0;j < 512; j++)
            h_A[i][j] = 0.1;       
    }
    for (int i = 0; i < 512; i++) 
    {
        for(int j = 0;j < 512; j++)
            h_B[i][j] = 0.2;       
    }
    // 分配
    err = cuMemAlloc((CUdeviceptr*)&d_A, M*K * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<6<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_B, K*N * sizeof(float));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_C, M*N * sizeof(float));
    checkCudaErrors(err);
    // 复制
    err = cuMemcpyHtoD((CUdeviceptr)d_A, h_A, M*K * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<9<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_B, h_B, K*N * sizeof(float));
    checkCudaErrors(err);
    void *args[] = {(d_A), (d_B), (d_C)};
    void *d_args=nullptr;
    err = cuMemAlloc((CUdeviceptr*)&d_args, 3* sizeof(void*));
    err = cuMemcpyHtoD((CUdeviceptr)d_args, args,3* sizeof(void*));
    if(err==CUDA_SUCCESS) std::cout<<9<<' ';
    checkCudaErrors(err);
    // 设置内核参数
    
    
    CUstream hstream;
    err = cuStreamCreate(&hstream, CU_STREAM_DEFAULT);
    checkCudaErrors(err);
    if(err==CUDA_SUCCESS) std::cout<<10<<' ';
    
    // 启动
    dim3 gridDim(1, 1, 1);
    dim3 blockDim(256, 1, 1);
    unsigned int  sharedMemBytes=49152;
    //kernel<<<gridDim, blockDim ,sharedMemBytes,hstream>>>(d_A,d_B,d_C);
    err = cuLaunchKernel(kernel,
                         gridDim.x, gridDim.y, gridDim.z,
                         blockDim.x, blockDim.y, blockDim.z,
                         sharedMemBytes, // 共享内存字节数
                         hstream, // 流
                         &d_args, // 参数
                         NULL); // 额外参数
    if(err==CUDA_SUCCESS) std::cout<<12<<' ';
    checkCudaErrors(err);

    // 复制
    err = cuMemcpyDtoH(h_C, (CUdeviceptr)d_C, M*N * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<13<<' ';
    checkCudaErrors(err);

    // 打印
    for (int i = 0; i < 10; i++) { 
        std::cout << "C[" << i <<","<<i<<" ] = " << h_C[i][i] << std::endl;
    }

    // 释放
    err = cuMemFree((CUdeviceptr)d_A);
    if(err==CUDA_SUCCESS) std::cout<<14<<' ';
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_B);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_C);
    checkCudaErrors(err);
    err = cuCtxDestroy(context);
    if(err==CUDA_SUCCESS) std::cout<<15<<' ';
    checkCudaErrors(err);
    return 0;
}