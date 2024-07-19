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
    checkCudaErrors(err);

    // Get the first device
    err = cuDeviceGet(&device, 0);
    checkCudaErrors(err);

    // Create a context
    err = cuCtxCreate(&context, 0, device);
    checkCudaErrors(err);

    // Load the module
    err = cuModuleLoad(&module, "matmul_kernel.cubin");
    checkCudaErrors(err);

    // Get the kernel function
    err = cuModuleGetFunction(&kernel, module, "matmul_kernel");
    checkCudaErrors(err);

    // Launch the kernel
    void *args[] = { /* kernel arguments */ };
    err = cuLaunchKernel(kernel, 1, 1, 1, 1, 1, 1, 0, 0, args, 0);
    checkCudaErrors(err);

    // Clean up
    cuModuleUnload(module);
    cuCtxDestroy(context);

    return 0;
}