#include <iostream>
#include <cuda.h>
extern "C" {
    #include "kernel.da01dcef_0d1d2d34567891011.h"
}

int main() {
    CUdevice device;
    CUcontext context;
    CUresult err;
    err = cuInit(0);
    err = cuDeviceGet(&device, 0);
    err = cuCtxCreate(&context, 0, device);
    float h_A[512][512];float h_B[512][512];float h_C[512][512];
    float* d_A=nullptr; float* d_B=nullptr; float* d_C=nullptr;
    int M=512;int N=512;int K=512;

    for (int i = 0; i < 512; i++){
        for(int j = 0;j < 512; j++)
            h_A[i][j] = 0.1;
  }
     for (int i = 0; i < 512; i++){
        for(int j = 0;j < 512; j++)
            h_B[i][j] = 0.2;
  }
    err = cuMemAlloc((CUdeviceptr*)&d_A, M*K * sizeof(float));
    err = cuMemAlloc((CUdeviceptr*)&d_B, M*K * sizeof(float));
    err = cuMemAlloc((CUdeviceptr*)&d_C, M*N * sizeof(float));
    err = cuMemcpyHtoD((CUdeviceptr)d_A, h_A, M*K * sizeof(float));
    err = cuMemcpyHtoD((CUdeviceptr)d_B, h_B, M*K * sizeof(float));
    CUstream hstream;
    err = cuStreamCreate(&hstream, CU_STREAM_DEFAULT);
    kernel_da01dcef_0d1d2d34567891011(hstream, (CUdeviceptr)d_A, (CUdeviceptr)d_B, (CUdeviceptr)d_C,(int32_t) 512, (int32_t) 512, (int32_t) 512, (int32_t) 512, (int32_t) 1, (int32_t) 512, (int32_t) 1, (int32_t) 512, (int32_t) 1);
    err = cuMemcpyDtoH(h_C, (CUdeviceptr)d_C, M*N * sizeof(float));
    for (int i = 0; i < 10; i++) {
        std::cout << "C[" << i <<","<<i<<" ] = " << h_C[i][i] << std::endl;
    }
    err = cuMemFree((CUdeviceptr)d_A);
    err = cuMemFree((CUdeviceptr)d_B);
    err = cuMemFree((CUdeviceptr)d_C);
    err = cuCtxDestroy(context);
    return 0;
}
