#include <cuda.h>

CUresult kernel_32x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x8_warps4xstages5();
void unload_kernel_32x128x64x8_warps4xstages5();
    

CUresult kernel_64x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x4_warps4xstages4();
void unload_kernel_64x128x64x4_warps4xstages4();
    

CUresult kernel_128x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x16_warps2xstages4();
void unload_kernel_128x64x64x16_warps2xstages4();
    

CUresult kernel_128x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x4_warps4xstages5();
void unload_kernel_128x256x32x4_warps4xstages5();
    

CUresult kernel_32x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x4_warps4xstages5();
void unload_kernel_32x128x32x4_warps4xstages5();
    

CUresult kernel_16x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x16_warps2xstages5();
void unload_kernel_16x64x32x16_warps2xstages5();
    

CUresult kernel_128x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x8_warps4xstages4();
void unload_kernel_128x128x32x8_warps4xstages4();
    

CUresult kernel_16x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x8_warps4xstages5();
void unload_kernel_16x128x32x8_warps4xstages5();
    

CUresult kernel_32x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x8_warps2xstages4();
void unload_kernel_32x64x64x8_warps2xstages4();
    

CUresult kernel_128x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x16_warps4xstages5();
void unload_kernel_128x128x64x16_warps4xstages5();
    

CUresult kernel_128x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x16_warps4xstages4();
void unload_kernel_128x128x32x16_warps4xstages4();
    

CUresult kernel_64x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x8_warps2xstages5();
void unload_kernel_64x64x32x8_warps2xstages5();
    

CUresult kernel_16x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x16_warps4xstages4();
void unload_kernel_16x128x64x16_warps4xstages4();
    

CUresult kernel_32x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x8_warps2xstages5();
void unload_kernel_32x64x64x8_warps2xstages5();
    

CUresult kernel_16x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x8_warps2xstages4();
void unload_kernel_16x64x64x8_warps2xstages4();
    

CUresult kernel_128x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x16_warps4xstages5();
void unload_kernel_128x256x64x16_warps4xstages5();
    

CUresult kernel_64x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x4_warps4xstages5();
void unload_kernel_64x128x32x4_warps4xstages5();
    

CUresult kernel_128x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x16_warps2xstages5();
void unload_kernel_128x64x64x16_warps2xstages5();
    

CUresult kernel_16x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x4_warps2xstages4();
void unload_kernel_16x64x64x4_warps2xstages4();
    

CUresult kernel_16x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x4_warps2xstages5();
void unload_kernel_16x64x32x4_warps2xstages5();
    

CUresult kernel_16x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x16_warps2xstages4();
void unload_kernel_16x64x32x16_warps2xstages4();
    

CUresult kernel_128x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x16_warps4xstages4();
void unload_kernel_128x128x64x16_warps4xstages4();
    

CUresult kernel_64x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x8_warps4xstages4();
void unload_kernel_64x128x64x8_warps4xstages4();
    

CUresult kernel_64x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x8_warps4xstages4();
void unload_kernel_64x128x32x8_warps4xstages4();
    

CUresult kernel_128x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x4_warps2xstages4();
void unload_kernel_128x64x32x4_warps2xstages4();
    

CUresult kernel_16x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x16_warps2xstages5();
void unload_kernel_16x64x64x16_warps2xstages5();
    

CUresult kernel_32x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x16_warps4xstages5();
void unload_kernel_32x256x32x16_warps4xstages5();
    

CUresult kernel_32x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x4_warps4xstages4();
void unload_kernel_32x256x32x4_warps4xstages4();
    

CUresult kernel_64x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x4_warps2xstages5();
void unload_kernel_64x64x64x4_warps2xstages5();
    

CUresult kernel_32x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x16_warps4xstages4();
void unload_kernel_32x256x64x16_warps4xstages4();
    

CUresult kernel_16x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x4_warps4xstages4();
void unload_kernel_16x256x64x4_warps4xstages4();
    

CUresult kernel_32x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x16_warps4xstages5();
void unload_kernel_32x128x64x16_warps4xstages5();
    

CUresult kernel_16x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x16_warps4xstages5();
void unload_kernel_16x256x32x16_warps4xstages5();
    

CUresult kernel_16x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x16_warps2xstages4();
void unload_kernel_16x64x64x16_warps2xstages4();
    

CUresult kernel_128x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x16_warps2xstages5();
void unload_kernel_128x64x32x16_warps2xstages5();
    

CUresult kernel_32x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x16_warps4xstages5();
void unload_kernel_32x256x64x16_warps4xstages5();
    

CUresult kernel_64x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x8_warps4xstages5();
void unload_kernel_64x128x64x8_warps4xstages5();
    

CUresult kernel_128x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x4_warps2xstages5();
void unload_kernel_128x64x32x4_warps2xstages5();
    

CUresult kernel_32x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x16_warps2xstages4();
void unload_kernel_32x64x32x16_warps2xstages4();
    

CUresult kernel_64x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x16_warps4xstages5();
void unload_kernel_64x128x32x16_warps4xstages5();
    

CUresult kernel_64x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x16_warps2xstages5();
void unload_kernel_64x64x64x16_warps2xstages5();
    

CUresult kernel_32x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x8_warps4xstages5();
void unload_kernel_32x256x64x8_warps4xstages5();
    

CUresult kernel_16x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x8_warps4xstages5();
void unload_kernel_16x128x64x8_warps4xstages5();
    

CUresult kernel_64x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x8_warps4xstages5();
void unload_kernel_64x256x32x8_warps4xstages5();
    

CUresult kernel_128x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x4_warps4xstages5();
void unload_kernel_128x128x64x4_warps4xstages5();
    

CUresult kernel_128x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x8_warps4xstages5();
void unload_kernel_128x256x32x8_warps4xstages5();
    

CUresult kernel_16x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x8_warps4xstages5();
void unload_kernel_16x256x32x8_warps4xstages5();
    

CUresult kernel_128x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x8_warps4xstages5();
void unload_kernel_128x256x64x8_warps4xstages5();
    

CUresult kernel_64x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x8_warps2xstages4();
void unload_kernel_64x64x64x8_warps2xstages4();
    

CUresult kernel_64x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x4_warps2xstages4();
void unload_kernel_64x64x32x4_warps2xstages4();
    

CUresult kernel_64x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x4_warps4xstages4();
void unload_kernel_64x256x64x4_warps4xstages4();
    

CUresult kernel_128x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x8_warps4xstages5();
void unload_kernel_128x128x64x8_warps4xstages5();
    

CUresult kernel_16x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x4_warps4xstages4();
void unload_kernel_16x256x32x4_warps4xstages4();
    

CUresult kernel_128x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x8_warps2xstages4();
void unload_kernel_128x64x64x8_warps2xstages4();
    

CUresult kernel_128x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x16_warps4xstages5();
void unload_kernel_128x256x32x16_warps4xstages5();
    

CUresult kernel_16x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x8_warps4xstages4();
void unload_kernel_16x128x64x8_warps4xstages4();
    

CUresult kernel_64x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x8_warps2xstages4();
void unload_kernel_64x64x32x8_warps2xstages4();
    

CUresult kernel_64x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x4_warps4xstages5();
void unload_kernel_64x128x64x4_warps4xstages5();
    

CUresult kernel_128x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x4_warps4xstages4();
void unload_kernel_128x256x32x4_warps4xstages4();
    

CUresult kernel_32x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x8_warps2xstages4();
void unload_kernel_32x64x32x8_warps2xstages4();
    

CUresult kernel_32x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x16_warps4xstages5();
void unload_kernel_32x128x32x16_warps4xstages5();
    

CUresult kernel_16x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x8_warps4xstages4();
void unload_kernel_16x256x32x8_warps4xstages4();
    

CUresult kernel_16x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x4_warps2xstages5();
void unload_kernel_16x64x64x4_warps2xstages5();
    

CUresult kernel_16x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x16_warps4xstages5();
void unload_kernel_16x256x64x16_warps4xstages5();
    

CUresult kernel_128x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x4_warps4xstages5();
void unload_kernel_128x256x64x4_warps4xstages5();
    

CUresult kernel_16x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x8_warps4xstages5();
void unload_kernel_16x256x64x8_warps4xstages5();
    

CUresult kernel_16x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x16_warps4xstages4();
void unload_kernel_16x128x32x16_warps4xstages4();
    

CUresult kernel_128x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x4_warps2xstages4();
void unload_kernel_128x64x64x4_warps2xstages4();
    

CUresult kernel_128x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x4_warps4xstages4();
void unload_kernel_128x128x64x4_warps4xstages4();
    

CUresult kernel_16x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x4_warps4xstages5();
void unload_kernel_16x128x64x4_warps4xstages5();
    

CUresult kernel_32x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x4_warps4xstages4();
void unload_kernel_32x256x64x4_warps4xstages4();
    

CUresult kernel_16x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x4_warps4xstages5();
void unload_kernel_16x256x32x4_warps4xstages5();
    

CUresult kernel_128x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x4_warps4xstages4();
void unload_kernel_128x128x32x4_warps4xstages4();
    

CUresult kernel_32x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x8_warps4xstages5();
void unload_kernel_32x128x32x8_warps4xstages5();
    

CUresult kernel_128x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x16_warps4xstages5();
void unload_kernel_128x128x32x16_warps4xstages5();
    

CUresult kernel_32x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x8_warps4xstages4();
void unload_kernel_32x128x32x8_warps4xstages4();
    

CUresult kernel_64x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x16_warps4xstages4();
void unload_kernel_64x128x32x16_warps4xstages4();
    

CUresult kernel_16x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x16_warps4xstages5();
void unload_kernel_16x128x64x16_warps4xstages5();
    

CUresult kernel_64x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x16_warps2xstages4();
void unload_kernel_64x64x64x16_warps2xstages4();
    

CUresult kernel_32x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x4_warps4xstages5();
void unload_kernel_32x256x64x4_warps4xstages5();
    

CUresult kernel_16x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x16_warps4xstages5();
void unload_kernel_16x128x32x16_warps4xstages5();
    

CUresult kernel_16x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x16_warps4xstages4();
void unload_kernel_16x256x64x16_warps4xstages4();
    

CUresult kernel_64x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x8_warps2xstages5();
void unload_kernel_64x64x64x8_warps2xstages5();
    

CUresult kernel_64x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x16_warps2xstages5();
void unload_kernel_64x64x32x16_warps2xstages5();
    

CUresult kernel_64x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x4_warps4xstages4();
void unload_kernel_64x256x32x4_warps4xstages4();
    

CUresult kernel_128x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x16_warps4xstages4();
void unload_kernel_128x256x32x16_warps4xstages4();
    

CUresult kernel_64x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x64x4_warps2xstages4();
void unload_kernel_64x64x64x4_warps2xstages4();
    

CUresult kernel_128x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x4_warps4xstages4();
void unload_kernel_128x256x64x4_warps4xstages4();
    

CUresult kernel_16x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x64x4_warps4xstages4();
void unload_kernel_16x128x64x4_warps4xstages4();
    

CUresult kernel_32x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x4_warps4xstages4();
void unload_kernel_32x128x64x4_warps4xstages4();
    

CUresult kernel_64x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x16_warps2xstages4();
void unload_kernel_64x64x32x16_warps2xstages4();
    

CUresult kernel_64x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x4_warps4xstages4();
void unload_kernel_64x128x32x4_warps4xstages4();
    

CUresult kernel_64x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x16_warps4xstages5();
void unload_kernel_64x128x64x16_warps4xstages5();
    

CUresult kernel_64x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x8_warps4xstages5();
void unload_kernel_64x256x64x8_warps4xstages5();
    

CUresult kernel_128x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x8_warps2xstages5();
void unload_kernel_128x64x64x8_warps2xstages5();
    

CUresult kernel_16x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x4_warps4xstages5();
void unload_kernel_16x128x32x4_warps4xstages5();
    

CUresult kernel_64x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x32x8_warps4xstages5();
void unload_kernel_64x128x32x8_warps4xstages5();
    

CUresult kernel_64x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x16_warps4xstages4();
void unload_kernel_64x256x32x16_warps4xstages4();
    

CUresult kernel_64x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x8_warps4xstages4();
void unload_kernel_64x256x64x8_warps4xstages4();
    

CUresult kernel_16x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x4_warps4xstages5();
void unload_kernel_16x256x64x4_warps4xstages5();
    

CUresult kernel_128x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x16_warps2xstages4();
void unload_kernel_128x64x32x16_warps2xstages4();
    

CUresult kernel_32x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x4_warps4xstages5();
void unload_kernel_32x256x32x4_warps4xstages5();
    

CUresult kernel_32x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x16_warps4xstages4();
void unload_kernel_32x128x32x16_warps4xstages4();
    

CUresult kernel_128x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x4_warps4xstages5();
void unload_kernel_128x128x32x4_warps4xstages5();
    

CUresult kernel_128x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x64x4_warps2xstages5();
void unload_kernel_128x64x64x4_warps2xstages5();
    

CUresult kernel_32x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x4_warps2xstages5();
void unload_kernel_32x64x64x4_warps2xstages5();
    

CUresult kernel_32x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x4_warps2xstages4();
void unload_kernel_32x64x32x4_warps2xstages4();
    

CUresult kernel_32x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x8_warps2xstages5();
void unload_kernel_32x64x32x8_warps2xstages5();
    

CUresult kernel_128x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x64x8_warps4xstages4();
void unload_kernel_128x128x64x8_warps4xstages4();
    

CUresult kernel_32x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x64x8_warps4xstages4();
void unload_kernel_32x256x64x8_warps4xstages4();
    

CUresult kernel_64x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x16_warps4xstages5();
void unload_kernel_64x256x64x16_warps4xstages5();
    

CUresult kernel_16x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x32x16_warps4xstages4();
void unload_kernel_16x256x32x16_warps4xstages4();
    

CUresult kernel_32x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x32x4_warps4xstages4();
void unload_kernel_32x128x32x4_warps4xstages4();
    

CUresult kernel_128x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x32x8_warps4xstages4();
void unload_kernel_128x256x32x8_warps4xstages4();
    

CUresult kernel_32x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x8_warps4xstages4();
void unload_kernel_32x256x32x8_warps4xstages4();
    

CUresult kernel_64x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x4_warps4xstages5();
void unload_kernel_64x256x64x4_warps4xstages5();
    

CUresult kernel_64x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x64x16_warps4xstages4();
void unload_kernel_64x256x64x16_warps4xstages4();
    

CUresult kernel_64x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x8_warps4xstages4();
void unload_kernel_64x256x32x8_warps4xstages4();
    

CUresult kernel_128x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x8_warps2xstages4();
void unload_kernel_128x64x32x8_warps2xstages4();
    

CUresult kernel_32x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x16_warps2xstages5();
void unload_kernel_32x64x64x16_warps2xstages5();
    

CUresult kernel_64x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x64x32x4_warps2xstages5();
void unload_kernel_64x64x32x4_warps2xstages5();
    

CUresult kernel_16x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x4_warps4xstages4();
void unload_kernel_16x128x32x4_warps4xstages4();
    

CUresult kernel_32x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x4_warps2xstages5();
void unload_kernel_32x64x32x4_warps2xstages5();
    

CUresult kernel_128x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x64x32x8_warps2xstages5();
void unload_kernel_128x64x32x8_warps2xstages5();
    

CUresult kernel_32x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x16_warps2xstages4();
void unload_kernel_32x64x64x16_warps2xstages4();
    

CUresult kernel_64x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x16_warps4xstages5();
void unload_kernel_64x256x32x16_warps4xstages5();
    

CUresult kernel_32x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x16_warps4xstages4();
void unload_kernel_32x128x64x16_warps4xstages4();
    

CUresult kernel_32x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x16_warps4xstages4();
void unload_kernel_32x256x32x16_warps4xstages4();
    

CUresult kernel_32x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x32x16_warps2xstages5();
void unload_kernel_32x64x32x16_warps2xstages5();
    

CUresult kernel_16x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x8_warps2xstages5();
void unload_kernel_16x64x32x8_warps2xstages5();
    

CUresult kernel_16x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x8_warps2xstages4();
void unload_kernel_16x64x32x8_warps2xstages4();
    

CUresult kernel_128x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x8_warps4xstages4();
void unload_kernel_128x256x64x8_warps4xstages4();
    

CUresult kernel_16x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x256x64x8_warps4xstages4();
void unload_kernel_16x256x64x8_warps4xstages4();
    

CUresult kernel_16x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x64x8_warps2xstages5();
void unload_kernel_16x64x64x8_warps2xstages5();
    

CUresult kernel_64x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x128x64x16_warps4xstages4();
void unload_kernel_64x128x64x16_warps4xstages4();
    

CUresult kernel_16x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x128x32x8_warps4xstages4();
void unload_kernel_16x128x32x8_warps4xstages4();
    

CUresult kernel_32x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x256x32x8_warps4xstages5();
void unload_kernel_32x256x32x8_warps4xstages5();
    

CUresult kernel_32x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x8_warps4xstages4();
void unload_kernel_32x128x64x8_warps4xstages4();
    

CUresult kernel_128x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x128x32x8_warps4xstages5();
void unload_kernel_128x128x32x8_warps4xstages5();
    

CUresult kernel_32x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x128x64x4_warps4xstages5();
void unload_kernel_32x128x64x4_warps4xstages5();
    

CUresult kernel_128x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_128x256x64x16_warps4xstages4();
void unload_kernel_128x256x64x16_warps4xstages4();
    

CUresult kernel_32x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_32x64x64x4_warps2xstages4();
void unload_kernel_32x64x64x4_warps2xstages4();
    

CUresult kernel_64x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_64x256x32x4_warps4xstages5();
void unload_kernel_64x256x32x4_warps4xstages5();
    

CUresult kernel_16x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
void load_kernel_16x64x32x4_warps2xstages4();
void unload_kernel_16x64x32x4_warps2xstages4();
    
int kernel_get_num_algos(void);

CUresult kernel_default(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
CUresult kernel(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn, int algo_id);
void load_kernel();
void unload_kernel();
    