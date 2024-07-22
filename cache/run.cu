#include <cuda.h>
#include <cuda_runtime.h>
#include <iostream>

#define checkCudaErrors(err) { \
    if (err != CUDA_SUCCESS) { \
        const char *errorName; \
        const char *errorString; \
        cuGetErrorName(err, &errorName); \
        cuGetErrorString(err, &errorString); \
        std::cerr << "CUDA Error: " << errorName << ": " << errorString << std::endl; \
        exit(EXIT_FAILURE); \
    } \
}

int main() {
    CUdevice device;
    CUcontext context;
    CUmodule module;
    CUfunction kernel;
    CUresult err;

    // Initialize the driver API
    err = cuInit(0);
    if(err!=CUDA_SUCCESS) std::cout<<1;
    checkCudaErrors(err);

    // Get the first device
    err = cuDeviceGet(&device, 0);
    if(err!=CUDA_SUCCESS) std::cout<<2;
    checkCudaErrors(err);

    // Create a context
    err = cuCtxCreate(&context, 0, device);
    if(err!=CUDA_SUCCESS) std::cout<<3;
    checkCudaErrors(err);

    // Load the module
    err = cuModuleLoad(&module, "matmul_cache_kernel.cubin");
    if(err!=CUDA_SUCCESS) std::cout<<4;
    checkCudaErrors(err);
     
    // Get the kernel function
    err = cuModuleGetFunction(&kernel, module, "matmul_cache_kernel_0d1d2d3d4d5d6d7c8d9c10d11c");
    if(err!=CUDA_SUCCESS) std::cout<<5;
    checkCudaErrors(err);
CUfunctionAttributes attrs;
cuFuncGetAttributes(&attrs, kernel);


    return 0;
}