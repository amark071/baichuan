#include <iostream>
#include <cuda.h>


// 检查CUDA错误的宏
#define checkCudaErrors(err) { \
    if (err != CUDA_SUCCESS) { \
        std::cerr << "CUDA error: " << err << std::endl; \
        exit(EXIT_FAILURE); \
    } \
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
    err = cuModuleGetFunction(&kernel, module, "matmul_cache_kernel_0d1d2d3d4d5d6d7c8d9c10d11c");
    if(err==CUDA_SUCCESS) std::cout<<5<<' ';
    checkCudaErrors(err);

    // 定义输入和输出数据
    float h_A[512][512];
    float h_B[512][512];
    float h_C[512][512];
    float *d_A, *d_B, *d_C;

    int M=512;
    int N=512;
    int K=512;
    int *d_m,*d_n,*d_k;
   
    int stride_a[2];
    int stride_b[2];
    int stride_c[2];
    stride_a[0]=512;
    stride_a[1]=1;
    stride_b[0]=512;
    stride_b[1]=1;
    stride_c[0]=512;
    stride_c[1]=1;

    int *d_stride_a,*d_stride_b,*d_stride_c;

    // 初始化
    for (int i = 0; i < 512; i++) 
    {
        for(int j = 0;j < 512; j++)
            h_A[i][j] = static_cast<float>(i);       
    }
    for (int i = 0; i < 512; i++) 
    {
        for(int j = 0;j < 512; j++)
            h_B[i][j] = static_cast<float>(j);       
    }
    
    // 分配
    err = cuMemAlloc((CUdeviceptr*)&d_A, M*K * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<6<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_B, K*N * sizeof(float));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_C, M*N * sizeof(float));
    checkCudaErrors(err);

    err = cuMemAlloc((CUdeviceptr*)&d_m, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<7<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_n, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_k, sizeof(int));
    checkCudaErrors(err);

    err = cuMemAlloc((CUdeviceptr*)&d_stride_a, 2*sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<8<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_b, 2*sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_c, 2*sizeof(int));
    checkCudaErrors(err);


    // 复制
    err = cuMemcpyHtoD((CUdeviceptr)d_A, h_A, M*K * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<9<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_B, h_B, K*N * sizeof(float));
    checkCudaErrors(err);

    err = cuMemcpyHtoD((CUdeviceptr)d_m, &M, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<10<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_n, &N, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_k, &K, sizeof(int));
    checkCudaErrors(err);

    err = cuMemcpyHtoD((CUdeviceptr)d_stride_a, &stride_a, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<11<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_b, &stride_b, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_c, &stride_c, sizeof(int));
    checkCudaErrors(err);

    // 设置内核参数
    void *args[] = { d_A, d_B, d_C,d_m,d_n,d_k,d_stride_a,d_stride_b,d_stride_c};
    
    cudaStream_t stream;
    cudaStreamCreate(&stream);
    // 启动
    err = cuLaunchKernel(kernel,
                         4, 1, 1, // 网格维度
                         32, 32, 32, // 块维度
                         65536, // 共享内存字节数
                         stream, // 流
                         args, // 参数
                         0); // 额外参数
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
    err = cuMemFree((CUdeviceptr)d_m);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_n);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_k);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_a);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_b);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_c);
    checkCudaErrors(err);

    err = cuCtxDestroy(context);
    if(err==CUDA_SUCCESS) std::cout<<15<<' ';
    checkCudaErrors(err);
    return 0;
}