#ifndef TT_KERNEL_INCLUDES
#define TT_KERNEL_INCLUDES

#include <cuda.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

#endif

void unload_kernel_0f4ab485_0d1d2d34567891011(void);
void load_kernel_0f4ab485_0d1d2d34567891011(void);
// tt-linker: kernel_0f4ab485_0d1d2d34567891011:CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn:64x64x32x8_warps2xstages5
CUresult kernel_0f4ab485_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
