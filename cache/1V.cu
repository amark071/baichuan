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
    float h_A[32];
    float h_B[32];
    float h_C[32];
    float *d_A, *d_B, *d_C;

    int M=32;
    int N=32;
    int K=32;
    int *d_m,*d_n,*d_k;

    int stride_am=32;
    int stride_ak=1;
    int stride_bk=32;
    int stride_bn=1;
    int stride_cm=32;
    int stride_cn=1;

    int *d_stride_am,*d_stride_ak,*d_stride_bk,*d_stride_bn,*d_stride_cm,*d_stride_cn;

    // 初始化输入数据
    for (int i = 0; i < M; i++) 
    {
        
            h_A[i] = static_cast<float>(i);       
    }
    for (int i = 0; i < K; i++) 
    {
            h_B[i]= static_cast<float>(i);       
    }
    
    // 分配设备内存
    err = cuMemAlloc((CUdeviceptr*)&d_A, M * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<6<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_B, M * sizeof(float));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_C, M * sizeof(float));
    checkCudaErrors(err);

    err = cuMemAlloc((CUdeviceptr*)&d_m, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<7<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_n, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_k, sizeof(int));
    checkCudaErrors(err);

    err = cuMemAlloc((CUdeviceptr*)&d_stride_am, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<8<<' ';
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_ak, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_bk, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_bn, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_cm, sizeof(int));
    checkCudaErrors(err);
    err = cuMemAlloc((CUdeviceptr*)&d_stride_cn, sizeof(int));
    checkCudaErrors(err);


    // 将数据从主机复制到设备
    err = cuMemcpyHtoD((CUdeviceptr)d_A, h_A, M * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<9<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_B, h_B, M * sizeof(float));
    checkCudaErrors(err);

    err = cuMemcpyHtoD((CUdeviceptr)d_m, &M, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<10<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_n, &N, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_k, &K, sizeof(int));
    checkCudaErrors(err);

    err = cuMemcpyHtoD((CUdeviceptr)d_stride_am, &stride_am, sizeof(int));
    if(err==CUDA_SUCCESS) std::cout<<11<<' ';
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_ak, &stride_ak, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_bk, &stride_bk, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_bn, &stride_bn, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_cm, &stride_cm, sizeof(int));
    checkCudaErrors(err);
    err = cuMemcpyHtoD((CUdeviceptr)d_stride_cn, &stride_cn, sizeof(int));
    checkCudaErrors(err);

    // 设置内核参数
    void *args[] = { &d_A, &d_B, &d_C,&d_m,&d_n,&d_k,&d_stride_am,&d_stride_ak,&d_stride_bk,&d_stride_bn,&d_stride_cm,&d_stride_cn};
    
    // 启动内核
    err = cuLaunchKernel(kernel,
                         1, 1, 1, // 网格维度
                         256, 1, 1, // 块维度
                         0, // 共享内存字节数
                         0, // 流
                         args, // 参数
                         0); // 额外参数
    if(err==CUDA_SUCCESS) std::cout<<12<<' ';
    checkCudaErrors(err);

    // 将结果从设备复制回主机
    err = cuMemcpyDtoH(h_C, (CUdeviceptr)d_C, M * sizeof(float));
    if(err==CUDA_SUCCESS) std::cout<<13<<' ';
    checkCudaErrors(err);

    // 打印结果
    for (int i = 0; i < 10; i++) { // 打印前10个结果
        std::cout << "C[" << i <<","<<i<<" ] = " << h_C[i] << std::endl;
    }

    // 释放设备内存
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
    err = cuMemFree((CUdeviceptr)d_stride_am);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_ak);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_bk);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_bn);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_cm);
    checkCudaErrors(err);
    err = cuMemFree((CUdeviceptr)d_stride_cn);
    checkCudaErrors(err);

    err = cuCtxDestroy(context);
    if(err==CUDA_SUCCESS) std::cout<<15<<' ';
    checkCudaErrors(err);
    return 0;
}