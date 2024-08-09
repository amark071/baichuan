#include <cuda.h>
#include <stdint.h>
#include <assert.h>

// launcher for: kernel_32x128x64x8_warps4xstages5
CUresult kernel_00c473cf_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_00c473cf_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x8_warps4xstages5
void load_kernel_00c473cf_0d1d2d34567891011();
void load_kernel_32x128x64x8_warps4xstages5() {
  load_kernel_00c473cf_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x8_warps4xstages5
void unload_kernel_00c473cf_0d1d2d34567891011();
void unload_kernel_32x128x64x8_warps4xstages5() {
  unload_kernel_00c473cf_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x4_warps4xstages4
CUresult kernel_076b181c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_076b181c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x4_warps4xstages4
void load_kernel_076b181c_0d1d2d34567891011();
void load_kernel_64x128x64x4_warps4xstages4() {
  load_kernel_076b181c_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x4_warps4xstages4
void unload_kernel_076b181c_0d1d2d34567891011();
void unload_kernel_64x128x64x4_warps4xstages4() {
  unload_kernel_076b181c_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x16_warps2xstages4
CUresult kernel_084cdff2_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_084cdff2_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x16_warps2xstages4
void load_kernel_084cdff2_0d1d2d34567891011();
void load_kernel_128x64x64x16_warps2xstages4() {
  load_kernel_084cdff2_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x16_warps2xstages4
void unload_kernel_084cdff2_0d1d2d34567891011();
void unload_kernel_128x64x64x16_warps2xstages4() {
  unload_kernel_084cdff2_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x4_warps4xstages5
CUresult kernel_084ead86_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_084ead86_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x4_warps4xstages5
void load_kernel_084ead86_0d1d2d34567891011();
void load_kernel_128x256x32x4_warps4xstages5() {
  load_kernel_084ead86_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x4_warps4xstages5
void unload_kernel_084ead86_0d1d2d34567891011();
void unload_kernel_128x256x32x4_warps4xstages5() {
  unload_kernel_084ead86_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x4_warps4xstages5
CUresult kernel_099b0ee9_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_099b0ee9_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x4_warps4xstages5
void load_kernel_099b0ee9_0d1d2d34567891011();
void load_kernel_32x128x32x4_warps4xstages5() {
  load_kernel_099b0ee9_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x4_warps4xstages5
void unload_kernel_099b0ee9_0d1d2d34567891011();
void unload_kernel_32x128x32x4_warps4xstages5() {
  unload_kernel_099b0ee9_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x16_warps2xstages5
CUresult kernel_0a143fac_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0a143fac_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x16_warps2xstages5
void load_kernel_0a143fac_0d1d2d34567891011();
void load_kernel_16x64x32x16_warps2xstages5() {
  load_kernel_0a143fac_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x16_warps2xstages5
void unload_kernel_0a143fac_0d1d2d34567891011();
void unload_kernel_16x64x32x16_warps2xstages5() {
  unload_kernel_0a143fac_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x8_warps4xstages4
CUresult kernel_0a2548b4_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0a2548b4_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x8_warps4xstages4
void load_kernel_0a2548b4_0d1d2d34567891011();
void load_kernel_128x128x32x8_warps4xstages4() {
  load_kernel_0a2548b4_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x8_warps4xstages4
void unload_kernel_0a2548b4_0d1d2d34567891011();
void unload_kernel_128x128x32x8_warps4xstages4() {
  unload_kernel_0a2548b4_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x8_warps4xstages5
CUresult kernel_0a8fa129_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0a8fa129_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x8_warps4xstages5
void load_kernel_0a8fa129_0d1d2d34567891011();
void load_kernel_16x128x32x8_warps4xstages5() {
  load_kernel_0a8fa129_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x8_warps4xstages5
void unload_kernel_0a8fa129_0d1d2d34567891011();
void unload_kernel_16x128x32x8_warps4xstages5() {
  unload_kernel_0a8fa129_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x8_warps2xstages4
CUresult kernel_0ab9ac92_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0ab9ac92_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x8_warps2xstages4
void load_kernel_0ab9ac92_0d1d2d34567891011();
void load_kernel_32x64x64x8_warps2xstages4() {
  load_kernel_0ab9ac92_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x8_warps2xstages4
void unload_kernel_0ab9ac92_0d1d2d34567891011();
void unload_kernel_32x64x64x8_warps2xstages4() {
  unload_kernel_0ab9ac92_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x16_warps4xstages5
CUresult kernel_0bb2dc15_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0bb2dc15_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x16_warps4xstages5
void load_kernel_0bb2dc15_0d1d2d34567891011();
void load_kernel_128x128x64x16_warps4xstages5() {
  load_kernel_0bb2dc15_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x16_warps4xstages5
void unload_kernel_0bb2dc15_0d1d2d34567891011();
void unload_kernel_128x128x64x16_warps4xstages5() {
  unload_kernel_0bb2dc15_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x16_warps4xstages4
CUresult kernel_0ecfebfb_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0ecfebfb_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x16_warps4xstages4
void load_kernel_0ecfebfb_0d1d2d34567891011();
void load_kernel_128x128x32x16_warps4xstages4() {
  load_kernel_0ecfebfb_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x16_warps4xstages4
void unload_kernel_0ecfebfb_0d1d2d34567891011();
void unload_kernel_128x128x32x16_warps4xstages4() {
  unload_kernel_0ecfebfb_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x8_warps2xstages5
CUresult kernel_0f4ab485_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0f4ab485_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x8_warps2xstages5
void load_kernel_0f4ab485_0d1d2d34567891011();
void load_kernel_64x64x32x8_warps2xstages5() {
  load_kernel_0f4ab485_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x8_warps2xstages5
void unload_kernel_0f4ab485_0d1d2d34567891011();
void unload_kernel_64x64x32x8_warps2xstages5() {
  unload_kernel_0f4ab485_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x16_warps4xstages4
CUresult kernel_0ff9ebb1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_0ff9ebb1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x16_warps4xstages4
void load_kernel_0ff9ebb1_0d1d2d34567891011();
void load_kernel_16x128x64x16_warps4xstages4() {
  load_kernel_0ff9ebb1_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x16_warps4xstages4
void unload_kernel_0ff9ebb1_0d1d2d34567891011();
void unload_kernel_16x128x64x16_warps4xstages4() {
  unload_kernel_0ff9ebb1_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x8_warps2xstages5
CUresult kernel_11f7c317_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_11f7c317_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x8_warps2xstages5
void load_kernel_11f7c317_0d1d2d34567891011();
void load_kernel_32x64x64x8_warps2xstages5() {
  load_kernel_11f7c317_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x8_warps2xstages5
void unload_kernel_11f7c317_0d1d2d34567891011();
void unload_kernel_32x64x64x8_warps2xstages5() {
  unload_kernel_11f7c317_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x8_warps2xstages4
CUresult kernel_1261c9bc_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_1261c9bc_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x8_warps2xstages4
void load_kernel_1261c9bc_0d1d2d34567891011();
void load_kernel_16x64x64x8_warps2xstages4() {
  load_kernel_1261c9bc_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x8_warps2xstages4
void unload_kernel_1261c9bc_0d1d2d34567891011();
void unload_kernel_16x64x64x8_warps2xstages4() {
  unload_kernel_1261c9bc_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x16_warps4xstages5
CUresult kernel_152d7ec7_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_152d7ec7_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x16_warps4xstages5
void load_kernel_152d7ec7_0d1d2d34567891011();
void load_kernel_128x256x64x16_warps4xstages5() {
  load_kernel_152d7ec7_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x16_warps4xstages5
void unload_kernel_152d7ec7_0d1d2d34567891011();
void unload_kernel_128x256x64x16_warps4xstages5() {
  unload_kernel_152d7ec7_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x4_warps4xstages5
CUresult kernel_15ac3a21_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_15ac3a21_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x4_warps4xstages5
void load_kernel_15ac3a21_0d1d2d34567891011();
void load_kernel_64x128x32x4_warps4xstages5() {
  load_kernel_15ac3a21_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x4_warps4xstages5
void unload_kernel_15ac3a21_0d1d2d34567891011();
void unload_kernel_64x128x32x4_warps4xstages5() {
  unload_kernel_15ac3a21_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x16_warps2xstages5
CUresult kernel_1638dd4c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_1638dd4c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x16_warps2xstages5
void load_kernel_1638dd4c_0d1d2d34567891011();
void load_kernel_128x64x64x16_warps2xstages5() {
  load_kernel_1638dd4c_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x16_warps2xstages5
void unload_kernel_1638dd4c_0d1d2d34567891011();
void unload_kernel_128x64x64x16_warps2xstages5() {
  unload_kernel_1638dd4c_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x4_warps2xstages4
CUresult kernel_1702476a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_1702476a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x4_warps2xstages4
void load_kernel_1702476a_0d1d2d34567891011();
void load_kernel_16x64x64x4_warps2xstages4() {
  load_kernel_1702476a_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x4_warps2xstages4
void unload_kernel_1702476a_0d1d2d34567891011();
void unload_kernel_16x64x64x4_warps2xstages4() {
  unload_kernel_1702476a_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x4_warps2xstages5
CUresult kernel_170fa7fa_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_170fa7fa_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x4_warps2xstages5
void load_kernel_170fa7fa_0d1d2d34567891011();
void load_kernel_16x64x32x4_warps2xstages5() {
  load_kernel_170fa7fa_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x4_warps2xstages5
void unload_kernel_170fa7fa_0d1d2d34567891011();
void unload_kernel_16x64x32x4_warps2xstages5() {
  unload_kernel_170fa7fa_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x16_warps2xstages4
CUresult kernel_18f9a1c6_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_18f9a1c6_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x16_warps2xstages4
void load_kernel_18f9a1c6_0d1d2d34567891011();
void load_kernel_16x64x32x16_warps2xstages4() {
  load_kernel_18f9a1c6_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x16_warps2xstages4
void unload_kernel_18f9a1c6_0d1d2d34567891011();
void unload_kernel_16x64x32x16_warps2xstages4() {
  unload_kernel_18f9a1c6_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x16_warps4xstages4
CUresult kernel_1b0f422c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_1b0f422c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x16_warps4xstages4
void load_kernel_1b0f422c_0d1d2d34567891011();
void load_kernel_128x128x64x16_warps4xstages4() {
  load_kernel_1b0f422c_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x16_warps4xstages4
void unload_kernel_1b0f422c_0d1d2d34567891011();
void unload_kernel_128x128x64x16_warps4xstages4() {
  unload_kernel_1b0f422c_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x8_warps4xstages4
CUresult kernel_21782b4d_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_21782b4d_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x8_warps4xstages4
void load_kernel_21782b4d_0d1d2d34567891011();
void load_kernel_64x128x64x8_warps4xstages4() {
  load_kernel_21782b4d_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x8_warps4xstages4
void unload_kernel_21782b4d_0d1d2d34567891011();
void unload_kernel_64x128x64x8_warps4xstages4() {
  unload_kernel_21782b4d_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x8_warps4xstages4
CUresult kernel_22e762a8_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_22e762a8_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x8_warps4xstages4
void load_kernel_22e762a8_0d1d2d34567891011();
void load_kernel_64x128x32x8_warps4xstages4() {
  load_kernel_22e762a8_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x8_warps4xstages4
void unload_kernel_22e762a8_0d1d2d34567891011();
void unload_kernel_64x128x32x8_warps4xstages4() {
  unload_kernel_22e762a8_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x4_warps2xstages4
CUresult kernel_2526d53b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_2526d53b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x4_warps2xstages4
void load_kernel_2526d53b_0d1d2d34567891011();
void load_kernel_128x64x32x4_warps2xstages4() {
  load_kernel_2526d53b_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x4_warps2xstages4
void unload_kernel_2526d53b_0d1d2d34567891011();
void unload_kernel_128x64x32x4_warps2xstages4() {
  unload_kernel_2526d53b_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x16_warps2xstages5
CUresult kernel_2c7e9857_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_2c7e9857_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x16_warps2xstages5
void load_kernel_2c7e9857_0d1d2d34567891011();
void load_kernel_16x64x64x16_warps2xstages5() {
  load_kernel_2c7e9857_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x16_warps2xstages5
void unload_kernel_2c7e9857_0d1d2d34567891011();
void unload_kernel_16x64x64x16_warps2xstages5() {
  unload_kernel_2c7e9857_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x16_warps4xstages5
CUresult kernel_2e1bbdc4_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_2e1bbdc4_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x16_warps4xstages5
void load_kernel_2e1bbdc4_0d1d2d34567891011();
void load_kernel_32x256x32x16_warps4xstages5() {
  load_kernel_2e1bbdc4_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x16_warps4xstages5
void unload_kernel_2e1bbdc4_0d1d2d34567891011();
void unload_kernel_32x256x32x16_warps4xstages5() {
  unload_kernel_2e1bbdc4_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x4_warps4xstages4
CUresult kernel_307f6e2c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_307f6e2c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x4_warps4xstages4
void load_kernel_307f6e2c_0d1d2d34567891011();
void load_kernel_32x256x32x4_warps4xstages4() {
  load_kernel_307f6e2c_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x4_warps4xstages4
void unload_kernel_307f6e2c_0d1d2d34567891011();
void unload_kernel_32x256x32x4_warps4xstages4() {
  unload_kernel_307f6e2c_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x4_warps2xstages5
CUresult kernel_3193a6fe_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_3193a6fe_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x4_warps2xstages5
void load_kernel_3193a6fe_0d1d2d34567891011();
void load_kernel_64x64x64x4_warps2xstages5() {
  load_kernel_3193a6fe_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x4_warps2xstages5
void unload_kernel_3193a6fe_0d1d2d34567891011();
void unload_kernel_64x64x64x4_warps2xstages5() {
  unload_kernel_3193a6fe_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x16_warps4xstages4
CUresult kernel_320c5550_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_320c5550_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x16_warps4xstages4
void load_kernel_320c5550_0d1d2d34567891011();
void load_kernel_32x256x64x16_warps4xstages4() {
  load_kernel_320c5550_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x16_warps4xstages4
void unload_kernel_320c5550_0d1d2d34567891011();
void unload_kernel_32x256x64x16_warps4xstages4() {
  unload_kernel_320c5550_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x4_warps4xstages4
CUresult kernel_3742c1b1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_3742c1b1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x4_warps4xstages4
void load_kernel_3742c1b1_0d1d2d34567891011();
void load_kernel_16x256x64x4_warps4xstages4() {
  load_kernel_3742c1b1_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x4_warps4xstages4
void unload_kernel_3742c1b1_0d1d2d34567891011();
void unload_kernel_16x256x64x4_warps4xstages4() {
  unload_kernel_3742c1b1_0d1d2d34567891011();
}

// launcher for: kernel_32x128x64x16_warps4xstages5
CUresult kernel_39144b19_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_39144b19_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x16_warps4xstages5
void load_kernel_39144b19_0d1d2d34567891011();
void load_kernel_32x128x64x16_warps4xstages5() {
  load_kernel_39144b19_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x16_warps4xstages5
void unload_kernel_39144b19_0d1d2d34567891011();
void unload_kernel_32x128x64x16_warps4xstages5() {
  unload_kernel_39144b19_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x16_warps4xstages5
CUresult kernel_3adcf58b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_3adcf58b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x16_warps4xstages5
void load_kernel_3adcf58b_0d1d2d34567891011();
void load_kernel_16x256x32x16_warps4xstages5() {
  load_kernel_3adcf58b_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x16_warps4xstages5
void unload_kernel_3adcf58b_0d1d2d34567891011();
void unload_kernel_16x256x32x16_warps4xstages5() {
  unload_kernel_3adcf58b_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x16_warps2xstages4
CUresult kernel_3c1054cf_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_3c1054cf_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x16_warps2xstages4
void load_kernel_3c1054cf_0d1d2d34567891011();
void load_kernel_16x64x64x16_warps2xstages4() {
  load_kernel_3c1054cf_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x16_warps2xstages4
void unload_kernel_3c1054cf_0d1d2d34567891011();
void unload_kernel_16x64x64x16_warps2xstages4() {
  unload_kernel_3c1054cf_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x16_warps2xstages5
CUresult kernel_3f6972fa_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_3f6972fa_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x16_warps2xstages5
void load_kernel_3f6972fa_0d1d2d34567891011();
void load_kernel_128x64x32x16_warps2xstages5() {
  load_kernel_3f6972fa_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x16_warps2xstages5
void unload_kernel_3f6972fa_0d1d2d34567891011();
void unload_kernel_128x64x32x16_warps2xstages5() {
  unload_kernel_3f6972fa_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x16_warps4xstages5
CUresult kernel_43f85689_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_43f85689_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x16_warps4xstages5
void load_kernel_43f85689_0d1d2d34567891011();
void load_kernel_32x256x64x16_warps4xstages5() {
  load_kernel_43f85689_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x16_warps4xstages5
void unload_kernel_43f85689_0d1d2d34567891011();
void unload_kernel_32x256x64x16_warps4xstages5() {
  unload_kernel_43f85689_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x8_warps4xstages5
CUresult kernel_475fd6c4_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_475fd6c4_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x8_warps4xstages5
void load_kernel_475fd6c4_0d1d2d34567891011();
void load_kernel_64x128x64x8_warps4xstages5() {
  load_kernel_475fd6c4_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x8_warps4xstages5
void unload_kernel_475fd6c4_0d1d2d34567891011();
void unload_kernel_64x128x64x8_warps4xstages5() {
  unload_kernel_475fd6c4_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x4_warps2xstages5
CUresult kernel_48c1f5c1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_48c1f5c1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x4_warps2xstages5
void load_kernel_48c1f5c1_0d1d2d34567891011();
void load_kernel_128x64x32x4_warps2xstages5() {
  load_kernel_48c1f5c1_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x4_warps2xstages5
void unload_kernel_48c1f5c1_0d1d2d34567891011();
void unload_kernel_128x64x32x4_warps2xstages5() {
  unload_kernel_48c1f5c1_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x16_warps2xstages4
CUresult kernel_492f21b7_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_492f21b7_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x16_warps2xstages4
void load_kernel_492f21b7_0d1d2d34567891011();
void load_kernel_32x64x32x16_warps2xstages4() {
  load_kernel_492f21b7_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x16_warps2xstages4
void unload_kernel_492f21b7_0d1d2d34567891011();
void unload_kernel_32x64x32x16_warps2xstages4() {
  unload_kernel_492f21b7_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x16_warps4xstages5
CUresult kernel_4b3dbaf2_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_4b3dbaf2_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x16_warps4xstages5
void load_kernel_4b3dbaf2_0d1d2d34567891011();
void load_kernel_64x128x32x16_warps4xstages5() {
  load_kernel_4b3dbaf2_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x16_warps4xstages5
void unload_kernel_4b3dbaf2_0d1d2d34567891011();
void unload_kernel_64x128x32x16_warps4xstages5() {
  unload_kernel_4b3dbaf2_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x16_warps2xstages5
CUresult kernel_4c357593_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_4c357593_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x16_warps2xstages5
void load_kernel_4c357593_0d1d2d34567891011();
void load_kernel_64x64x64x16_warps2xstages5() {
  load_kernel_4c357593_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x16_warps2xstages5
void unload_kernel_4c357593_0d1d2d34567891011();
void unload_kernel_64x64x64x16_warps2xstages5() {
  unload_kernel_4c357593_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x8_warps4xstages5
CUresult kernel_4c6f2e47_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_4c6f2e47_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x8_warps4xstages5
void load_kernel_4c6f2e47_0d1d2d34567891011();
void load_kernel_32x256x64x8_warps4xstages5() {
  load_kernel_4c6f2e47_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x8_warps4xstages5
void unload_kernel_4c6f2e47_0d1d2d34567891011();
void unload_kernel_32x256x64x8_warps4xstages5() {
  unload_kernel_4c6f2e47_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x8_warps4xstages5
CUresult kernel_4d05e44c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_4d05e44c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x8_warps4xstages5
void load_kernel_4d05e44c_0d1d2d34567891011();
void load_kernel_16x128x64x8_warps4xstages5() {
  load_kernel_4d05e44c_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x8_warps4xstages5
void unload_kernel_4d05e44c_0d1d2d34567891011();
void unload_kernel_16x128x64x8_warps4xstages5() {
  unload_kernel_4d05e44c_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x8_warps4xstages5
CUresult kernel_4f46591b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_4f46591b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x8_warps4xstages5
void load_kernel_4f46591b_0d1d2d34567891011();
void load_kernel_64x256x32x8_warps4xstages5() {
  load_kernel_4f46591b_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x8_warps4xstages5
void unload_kernel_4f46591b_0d1d2d34567891011();
void unload_kernel_64x256x32x8_warps4xstages5() {
  unload_kernel_4f46591b_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x4_warps4xstages5
CUresult kernel_53d718e8_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_53d718e8_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x4_warps4xstages5
void load_kernel_53d718e8_0d1d2d34567891011();
void load_kernel_128x128x64x4_warps4xstages5() {
  load_kernel_53d718e8_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x4_warps4xstages5
void unload_kernel_53d718e8_0d1d2d34567891011();
void unload_kernel_128x128x64x4_warps4xstages5() {
  unload_kernel_53d718e8_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x8_warps4xstages5
CUresult kernel_53fdfb45_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_53fdfb45_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x8_warps4xstages5
void load_kernel_53fdfb45_0d1d2d34567891011();
void load_kernel_128x256x32x8_warps4xstages5() {
  load_kernel_53fdfb45_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x8_warps4xstages5
void unload_kernel_53fdfb45_0d1d2d34567891011();
void unload_kernel_128x256x32x8_warps4xstages5() {
  unload_kernel_53fdfb45_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x8_warps4xstages5
CUresult kernel_58543e42_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_58543e42_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x8_warps4xstages5
void load_kernel_58543e42_0d1d2d34567891011();
void load_kernel_16x256x32x8_warps4xstages5() {
  load_kernel_58543e42_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x8_warps4xstages5
void unload_kernel_58543e42_0d1d2d34567891011();
void unload_kernel_16x256x32x8_warps4xstages5() {
  unload_kernel_58543e42_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x8_warps4xstages5
CUresult kernel_5c762dff_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_5c762dff_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x8_warps4xstages5
void load_kernel_5c762dff_0d1d2d34567891011();
void load_kernel_128x256x64x8_warps4xstages5() {
  load_kernel_5c762dff_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x8_warps4xstages5
void unload_kernel_5c762dff_0d1d2d34567891011();
void unload_kernel_128x256x64x8_warps4xstages5() {
  unload_kernel_5c762dff_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x8_warps2xstages4
CUresult kernel_5c76303f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_5c76303f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x8_warps2xstages4
void load_kernel_5c76303f_0d1d2d34567891011();
void load_kernel_64x64x64x8_warps2xstages4() {
  load_kernel_5c76303f_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x8_warps2xstages4
void unload_kernel_5c76303f_0d1d2d34567891011();
void unload_kernel_64x64x64x8_warps2xstages4() {
  unload_kernel_5c76303f_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x4_warps2xstages4
CUresult kernel_5d1ee156_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_5d1ee156_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x4_warps2xstages4
void load_kernel_5d1ee156_0d1d2d34567891011();
void load_kernel_64x64x32x4_warps2xstages4() {
  load_kernel_5d1ee156_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x4_warps2xstages4
void unload_kernel_5d1ee156_0d1d2d34567891011();
void unload_kernel_64x64x32x4_warps2xstages4() {
  unload_kernel_5d1ee156_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x4_warps4xstages4
CUresult kernel_5d739c35_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_5d739c35_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x4_warps4xstages4
void load_kernel_5d739c35_0d1d2d34567891011();
void load_kernel_64x256x64x4_warps4xstages4() {
  load_kernel_5d739c35_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x4_warps4xstages4
void unload_kernel_5d739c35_0d1d2d34567891011();
void unload_kernel_64x256x64x4_warps4xstages4() {
  unload_kernel_5d739c35_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x8_warps4xstages5
CUresult kernel_6119af54_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_6119af54_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x8_warps4xstages5
void load_kernel_6119af54_0d1d2d34567891011();
void load_kernel_128x128x64x8_warps4xstages5() {
  load_kernel_6119af54_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x8_warps4xstages5
void unload_kernel_6119af54_0d1d2d34567891011();
void unload_kernel_128x128x64x8_warps4xstages5() {
  unload_kernel_6119af54_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x4_warps4xstages4
CUresult kernel_624722d6_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_624722d6_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x4_warps4xstages4
void load_kernel_624722d6_0d1d2d34567891011();
void load_kernel_16x256x32x4_warps4xstages4() {
  load_kernel_624722d6_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x4_warps4xstages4
void unload_kernel_624722d6_0d1d2d34567891011();
void unload_kernel_16x256x32x4_warps4xstages4() {
  unload_kernel_624722d6_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x8_warps2xstages4
CUresult kernel_62e0202e_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_62e0202e_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x8_warps2xstages4
void load_kernel_62e0202e_0d1d2d34567891011();
void load_kernel_128x64x64x8_warps2xstages4() {
  load_kernel_62e0202e_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x8_warps2xstages4
void unload_kernel_62e0202e_0d1d2d34567891011();
void unload_kernel_128x64x64x8_warps2xstages4() {
  unload_kernel_62e0202e_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x16_warps4xstages5
CUresult kernel_668e13fa_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_668e13fa_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x16_warps4xstages5
void load_kernel_668e13fa_0d1d2d34567891011();
void load_kernel_128x256x32x16_warps4xstages5() {
  load_kernel_668e13fa_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x16_warps4xstages5
void unload_kernel_668e13fa_0d1d2d34567891011();
void unload_kernel_128x256x32x16_warps4xstages5() {
  unload_kernel_668e13fa_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x8_warps4xstages4
CUresult kernel_66b7b4be_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_66b7b4be_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x8_warps4xstages4
void load_kernel_66b7b4be_0d1d2d34567891011();
void load_kernel_16x128x64x8_warps4xstages4() {
  load_kernel_66b7b4be_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x8_warps4xstages4
void unload_kernel_66b7b4be_0d1d2d34567891011();
void unload_kernel_16x128x64x8_warps4xstages4() {
  unload_kernel_66b7b4be_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x8_warps2xstages4
CUresult kernel_6da0ec73_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_6da0ec73_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x8_warps2xstages4
void load_kernel_6da0ec73_0d1d2d34567891011();
void load_kernel_64x64x32x8_warps2xstages4() {
  load_kernel_6da0ec73_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x8_warps2xstages4
void unload_kernel_6da0ec73_0d1d2d34567891011();
void unload_kernel_64x64x32x8_warps2xstages4() {
  unload_kernel_6da0ec73_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x4_warps4xstages5
CUresult kernel_6ee95362_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_6ee95362_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x4_warps4xstages5
void load_kernel_6ee95362_0d1d2d34567891011();
void load_kernel_64x128x64x4_warps4xstages5() {
  load_kernel_6ee95362_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x4_warps4xstages5
void unload_kernel_6ee95362_0d1d2d34567891011();
void unload_kernel_64x128x64x4_warps4xstages5() {
  unload_kernel_6ee95362_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x4_warps4xstages4
CUresult kernel_6f91d941_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_6f91d941_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x4_warps4xstages4
void load_kernel_6f91d941_0d1d2d34567891011();
void load_kernel_128x256x32x4_warps4xstages4() {
  load_kernel_6f91d941_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x4_warps4xstages4
void unload_kernel_6f91d941_0d1d2d34567891011();
void unload_kernel_128x256x32x4_warps4xstages4() {
  unload_kernel_6f91d941_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x8_warps2xstages4
CUresult kernel_7043566a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_7043566a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x8_warps2xstages4
void load_kernel_7043566a_0d1d2d34567891011();
void load_kernel_32x64x32x8_warps2xstages4() {
  load_kernel_7043566a_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x8_warps2xstages4
void unload_kernel_7043566a_0d1d2d34567891011();
void unload_kernel_32x64x32x8_warps2xstages4() {
  unload_kernel_7043566a_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x16_warps4xstages5
CUresult kernel_705d0902_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_705d0902_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x16_warps4xstages5
void load_kernel_705d0902_0d1d2d34567891011();
void load_kernel_32x128x32x16_warps4xstages5() {
  load_kernel_705d0902_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x16_warps4xstages5
void unload_kernel_705d0902_0d1d2d34567891011();
void unload_kernel_32x128x32x16_warps4xstages5() {
  unload_kernel_705d0902_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x8_warps4xstages4
CUresult kernel_718d97d5_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_718d97d5_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x8_warps4xstages4
void load_kernel_718d97d5_0d1d2d34567891011();
void load_kernel_16x256x32x8_warps4xstages4() {
  load_kernel_718d97d5_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x8_warps4xstages4
void unload_kernel_718d97d5_0d1d2d34567891011();
void unload_kernel_16x256x32x8_warps4xstages4() {
  unload_kernel_718d97d5_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x4_warps2xstages5
CUresult kernel_719a088d_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_719a088d_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x4_warps2xstages5
void load_kernel_719a088d_0d1d2d34567891011();
void load_kernel_16x64x64x4_warps2xstages5() {
  load_kernel_719a088d_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x4_warps2xstages5
void unload_kernel_719a088d_0d1d2d34567891011();
void unload_kernel_16x64x64x4_warps2xstages5() {
  unload_kernel_719a088d_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x16_warps4xstages5
CUresult kernel_74dfa9ee_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_74dfa9ee_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x16_warps4xstages5
void load_kernel_74dfa9ee_0d1d2d34567891011();
void load_kernel_16x256x64x16_warps4xstages5() {
  load_kernel_74dfa9ee_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x16_warps4xstages5
void unload_kernel_74dfa9ee_0d1d2d34567891011();
void unload_kernel_16x256x64x16_warps4xstages5() {
  unload_kernel_74dfa9ee_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x4_warps4xstages5
CUresult kernel_75786a9b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_75786a9b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x4_warps4xstages5
void load_kernel_75786a9b_0d1d2d34567891011();
void load_kernel_128x256x64x4_warps4xstages5() {
  load_kernel_75786a9b_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x4_warps4xstages5
void unload_kernel_75786a9b_0d1d2d34567891011();
void unload_kernel_128x256x64x4_warps4xstages5() {
  unload_kernel_75786a9b_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x8_warps4xstages5
CUresult kernel_7587cfbf_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_7587cfbf_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x8_warps4xstages5
void load_kernel_7587cfbf_0d1d2d34567891011();
void load_kernel_16x256x64x8_warps4xstages5() {
  load_kernel_7587cfbf_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x8_warps4xstages5
void unload_kernel_7587cfbf_0d1d2d34567891011();
void unload_kernel_16x256x64x8_warps4xstages5() {
  unload_kernel_7587cfbf_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x16_warps4xstages4
CUresult kernel_79fe2a6f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_79fe2a6f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x16_warps4xstages4
void load_kernel_79fe2a6f_0d1d2d34567891011();
void load_kernel_16x128x32x16_warps4xstages4() {
  load_kernel_79fe2a6f_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x16_warps4xstages4
void unload_kernel_79fe2a6f_0d1d2d34567891011();
void unload_kernel_16x128x32x16_warps4xstages4() {
  unload_kernel_79fe2a6f_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x4_warps2xstages4
CUresult kernel_7d43dae0_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_7d43dae0_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x4_warps2xstages4
void load_kernel_7d43dae0_0d1d2d34567891011();
void load_kernel_128x64x64x4_warps2xstages4() {
  load_kernel_7d43dae0_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x4_warps2xstages4
void unload_kernel_7d43dae0_0d1d2d34567891011();
void unload_kernel_128x64x64x4_warps2xstages4() {
  unload_kernel_7d43dae0_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x4_warps4xstages4
CUresult kernel_7f0b20ee_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_7f0b20ee_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x4_warps4xstages4
void load_kernel_7f0b20ee_0d1d2d34567891011();
void load_kernel_128x128x64x4_warps4xstages4() {
  load_kernel_7f0b20ee_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x4_warps4xstages4
void unload_kernel_7f0b20ee_0d1d2d34567891011();
void unload_kernel_128x128x64x4_warps4xstages4() {
  unload_kernel_7f0b20ee_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x4_warps4xstages5
CUresult kernel_7f22bb6a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_7f22bb6a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x4_warps4xstages5
void load_kernel_7f22bb6a_0d1d2d34567891011();
void load_kernel_16x128x64x4_warps4xstages5() {
  load_kernel_7f22bb6a_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x4_warps4xstages5
void unload_kernel_7f22bb6a_0d1d2d34567891011();
void unload_kernel_16x128x64x4_warps4xstages5() {
  unload_kernel_7f22bb6a_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x4_warps4xstages4
CUresult kernel_81db25c1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_81db25c1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x4_warps4xstages4
void load_kernel_81db25c1_0d1d2d34567891011();
void load_kernel_32x256x64x4_warps4xstages4() {
  load_kernel_81db25c1_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x4_warps4xstages4
void unload_kernel_81db25c1_0d1d2d34567891011();
void unload_kernel_32x256x64x4_warps4xstages4() {
  unload_kernel_81db25c1_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x4_warps4xstages5
CUresult kernel_83f9cf50_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_83f9cf50_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x4_warps4xstages5
void load_kernel_83f9cf50_0d1d2d34567891011();
void load_kernel_16x256x32x4_warps4xstages5() {
  load_kernel_83f9cf50_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x4_warps4xstages5
void unload_kernel_83f9cf50_0d1d2d34567891011();
void unload_kernel_16x256x32x4_warps4xstages5() {
  unload_kernel_83f9cf50_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x4_warps4xstages4
CUresult kernel_840e3d5a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_840e3d5a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x4_warps4xstages4
void load_kernel_840e3d5a_0d1d2d34567891011();
void load_kernel_128x128x32x4_warps4xstages4() {
  load_kernel_840e3d5a_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x4_warps4xstages4
void unload_kernel_840e3d5a_0d1d2d34567891011();
void unload_kernel_128x128x32x4_warps4xstages4() {
  unload_kernel_840e3d5a_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x8_warps4xstages5
CUresult kernel_85d07869_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_85d07869_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x8_warps4xstages5
void load_kernel_85d07869_0d1d2d34567891011();
void load_kernel_32x128x32x8_warps4xstages5() {
  load_kernel_85d07869_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x8_warps4xstages5
void unload_kernel_85d07869_0d1d2d34567891011();
void unload_kernel_32x128x32x8_warps4xstages5() {
  unload_kernel_85d07869_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x16_warps4xstages5
CUresult kernel_867c3b07_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_867c3b07_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x16_warps4xstages5
void load_kernel_867c3b07_0d1d2d34567891011();
void load_kernel_128x128x32x16_warps4xstages5() {
  load_kernel_867c3b07_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x16_warps4xstages5
void unload_kernel_867c3b07_0d1d2d34567891011();
void unload_kernel_128x128x32x16_warps4xstages5() {
  unload_kernel_867c3b07_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x8_warps4xstages4
CUresult kernel_87e072ae_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_87e072ae_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x8_warps4xstages4
void load_kernel_87e072ae_0d1d2d34567891011();
void load_kernel_32x128x32x8_warps4xstages4() {
  load_kernel_87e072ae_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x8_warps4xstages4
void unload_kernel_87e072ae_0d1d2d34567891011();
void unload_kernel_32x128x32x8_warps4xstages4() {
  unload_kernel_87e072ae_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x16_warps4xstages4
CUresult kernel_8a2dbe8a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_8a2dbe8a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x16_warps4xstages4
void load_kernel_8a2dbe8a_0d1d2d34567891011();
void load_kernel_64x128x32x16_warps4xstages4() {
  load_kernel_8a2dbe8a_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x16_warps4xstages4
void unload_kernel_8a2dbe8a_0d1d2d34567891011();
void unload_kernel_64x128x32x16_warps4xstages4() {
  unload_kernel_8a2dbe8a_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x16_warps4xstages5
CUresult kernel_8ac9753b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_8ac9753b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x16_warps4xstages5
void load_kernel_8ac9753b_0d1d2d34567891011();
void load_kernel_16x128x64x16_warps4xstages5() {
  load_kernel_8ac9753b_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x16_warps4xstages5
void unload_kernel_8ac9753b_0d1d2d34567891011();
void unload_kernel_16x128x64x16_warps4xstages5() {
  unload_kernel_8ac9753b_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x16_warps2xstages4
CUresult kernel_8c21baee_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_8c21baee_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x16_warps2xstages4
void load_kernel_8c21baee_0d1d2d34567891011();
void load_kernel_64x64x64x16_warps2xstages4() {
  load_kernel_8c21baee_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x16_warps2xstages4
void unload_kernel_8c21baee_0d1d2d34567891011();
void unload_kernel_64x64x64x16_warps2xstages4() {
  unload_kernel_8c21baee_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x4_warps4xstages5
CUresult kernel_927f689f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_927f689f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x4_warps4xstages5
void load_kernel_927f689f_0d1d2d34567891011();
void load_kernel_32x256x64x4_warps4xstages5() {
  load_kernel_927f689f_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x4_warps4xstages5
void unload_kernel_927f689f_0d1d2d34567891011();
void unload_kernel_32x256x64x4_warps4xstages5() {
  unload_kernel_927f689f_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x16_warps4xstages5
CUresult kernel_937da71f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_937da71f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x16_warps4xstages5
void load_kernel_937da71f_0d1d2d34567891011();
void load_kernel_16x128x32x16_warps4xstages5() {
  load_kernel_937da71f_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x16_warps4xstages5
void unload_kernel_937da71f_0d1d2d34567891011();
void unload_kernel_16x128x32x16_warps4xstages5() {
  unload_kernel_937da71f_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x16_warps4xstages4
CUresult kernel_9441aabb_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9441aabb_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x16_warps4xstages4
void load_kernel_9441aabb_0d1d2d34567891011();
void load_kernel_16x256x64x16_warps4xstages4() {
  load_kernel_9441aabb_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x16_warps4xstages4
void unload_kernel_9441aabb_0d1d2d34567891011();
void unload_kernel_16x256x64x16_warps4xstages4() {
  unload_kernel_9441aabb_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x8_warps2xstages5
CUresult kernel_950e6aa7_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_950e6aa7_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x8_warps2xstages5
void load_kernel_950e6aa7_0d1d2d34567891011();
void load_kernel_64x64x64x8_warps2xstages5() {
  load_kernel_950e6aa7_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x8_warps2xstages5
void unload_kernel_950e6aa7_0d1d2d34567891011();
void unload_kernel_64x64x64x8_warps2xstages5() {
  unload_kernel_950e6aa7_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x16_warps2xstages5
CUresult kernel_95c9643e_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_95c9643e_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x16_warps2xstages5
void load_kernel_95c9643e_0d1d2d34567891011();
void load_kernel_64x64x32x16_warps2xstages5() {
  load_kernel_95c9643e_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x16_warps2xstages5
void unload_kernel_95c9643e_0d1d2d34567891011();
void unload_kernel_64x64x32x16_warps2xstages5() {
  unload_kernel_95c9643e_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x4_warps4xstages4
CUresult kernel_9666cae7_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9666cae7_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x4_warps4xstages4
void load_kernel_9666cae7_0d1d2d34567891011();
void load_kernel_64x256x32x4_warps4xstages4() {
  load_kernel_9666cae7_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x4_warps4xstages4
void unload_kernel_9666cae7_0d1d2d34567891011();
void unload_kernel_64x256x32x4_warps4xstages4() {
  unload_kernel_9666cae7_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x16_warps4xstages4
CUresult kernel_989a8967_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_989a8967_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x16_warps4xstages4
void load_kernel_989a8967_0d1d2d34567891011();
void load_kernel_128x256x32x16_warps4xstages4() {
  load_kernel_989a8967_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x16_warps4xstages4
void unload_kernel_989a8967_0d1d2d34567891011();
void unload_kernel_128x256x32x16_warps4xstages4() {
  unload_kernel_989a8967_0d1d2d34567891011();
}

// launcher for: kernel_64x64x64x4_warps2xstages4
CUresult kernel_98bbb594_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_98bbb594_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x64x4_warps2xstages4
void load_kernel_98bbb594_0d1d2d34567891011();
void load_kernel_64x64x64x4_warps2xstages4() {
  load_kernel_98bbb594_0d1d2d34567891011();
}

// unload for: kernel_64x64x64x4_warps2xstages4
void unload_kernel_98bbb594_0d1d2d34567891011();
void unload_kernel_64x64x64x4_warps2xstages4() {
  unload_kernel_98bbb594_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x4_warps4xstages4
CUresult kernel_9945c22a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9945c22a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x4_warps4xstages4
void load_kernel_9945c22a_0d1d2d34567891011();
void load_kernel_128x256x64x4_warps4xstages4() {
  load_kernel_9945c22a_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x4_warps4xstages4
void unload_kernel_9945c22a_0d1d2d34567891011();
void unload_kernel_128x256x64x4_warps4xstages4() {
  unload_kernel_9945c22a_0d1d2d34567891011();
}

// launcher for: kernel_16x128x64x4_warps4xstages4
CUresult kernel_9a3dbf66_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9a3dbf66_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x64x4_warps4xstages4
void load_kernel_9a3dbf66_0d1d2d34567891011();
void load_kernel_16x128x64x4_warps4xstages4() {
  load_kernel_9a3dbf66_0d1d2d34567891011();
}

// unload for: kernel_16x128x64x4_warps4xstages4
void unload_kernel_9a3dbf66_0d1d2d34567891011();
void unload_kernel_16x128x64x4_warps4xstages4() {
  unload_kernel_9a3dbf66_0d1d2d34567891011();
}

// launcher for: kernel_32x128x64x4_warps4xstages4
CUresult kernel_9dd32b70_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9dd32b70_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x4_warps4xstages4
void load_kernel_9dd32b70_0d1d2d34567891011();
void load_kernel_32x128x64x4_warps4xstages4() {
  load_kernel_9dd32b70_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x4_warps4xstages4
void unload_kernel_9dd32b70_0d1d2d34567891011();
void unload_kernel_32x128x64x4_warps4xstages4() {
  unload_kernel_9dd32b70_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x16_warps2xstages4
CUresult kernel_9fcf4665_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_9fcf4665_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x16_warps2xstages4
void load_kernel_9fcf4665_0d1d2d34567891011();
void load_kernel_64x64x32x16_warps2xstages4() {
  load_kernel_9fcf4665_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x16_warps2xstages4
void unload_kernel_9fcf4665_0d1d2d34567891011();
void unload_kernel_64x64x32x16_warps2xstages4() {
  unload_kernel_9fcf4665_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x4_warps4xstages4
CUresult kernel_a060cdab_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_a060cdab_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x4_warps4xstages4
void load_kernel_a060cdab_0d1d2d34567891011();
void load_kernel_64x128x32x4_warps4xstages4() {
  load_kernel_a060cdab_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x4_warps4xstages4
void unload_kernel_a060cdab_0d1d2d34567891011();
void unload_kernel_64x128x32x4_warps4xstages4() {
  unload_kernel_a060cdab_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x16_warps4xstages5
CUresult kernel_a0a7f6df_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_a0a7f6df_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x16_warps4xstages5
void load_kernel_a0a7f6df_0d1d2d34567891011();
void load_kernel_64x128x64x16_warps4xstages5() {
  load_kernel_a0a7f6df_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x16_warps4xstages5
void unload_kernel_a0a7f6df_0d1d2d34567891011();
void unload_kernel_64x128x64x16_warps4xstages5() {
  unload_kernel_a0a7f6df_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x8_warps4xstages5
CUresult kernel_a5c025e8_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_a5c025e8_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x8_warps4xstages5
void load_kernel_a5c025e8_0d1d2d34567891011();
void load_kernel_64x256x64x8_warps4xstages5() {
  load_kernel_a5c025e8_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x8_warps4xstages5
void unload_kernel_a5c025e8_0d1d2d34567891011();
void unload_kernel_64x256x64x8_warps4xstages5() {
  unload_kernel_a5c025e8_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x8_warps2xstages5
CUresult kernel_a7df0395_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_a7df0395_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x8_warps2xstages5
void load_kernel_a7df0395_0d1d2d34567891011();
void load_kernel_128x64x64x8_warps2xstages5() {
  load_kernel_a7df0395_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x8_warps2xstages5
void unload_kernel_a7df0395_0d1d2d34567891011();
void unload_kernel_128x64x64x8_warps2xstages5() {
  unload_kernel_a7df0395_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x4_warps4xstages5
CUresult kernel_a8a6f352_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_a8a6f352_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x4_warps4xstages5
void load_kernel_a8a6f352_0d1d2d34567891011();
void load_kernel_16x128x32x4_warps4xstages5() {
  load_kernel_a8a6f352_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x4_warps4xstages5
void unload_kernel_a8a6f352_0d1d2d34567891011();
void unload_kernel_16x128x32x4_warps4xstages5() {
  unload_kernel_a8a6f352_0d1d2d34567891011();
}

// launcher for: kernel_64x128x32x8_warps4xstages5
CUresult kernel_ad3cdaa0_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ad3cdaa0_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x32x8_warps4xstages5
void load_kernel_ad3cdaa0_0d1d2d34567891011();
void load_kernel_64x128x32x8_warps4xstages5() {
  load_kernel_ad3cdaa0_0d1d2d34567891011();
}

// unload for: kernel_64x128x32x8_warps4xstages5
void unload_kernel_ad3cdaa0_0d1d2d34567891011();
void unload_kernel_64x128x32x8_warps4xstages5() {
  unload_kernel_ad3cdaa0_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x16_warps4xstages4
CUresult kernel_ad8f86f1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ad8f86f1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x16_warps4xstages4
void load_kernel_ad8f86f1_0d1d2d34567891011();
void load_kernel_64x256x32x16_warps4xstages4() {
  load_kernel_ad8f86f1_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x16_warps4xstages4
void unload_kernel_ad8f86f1_0d1d2d34567891011();
void unload_kernel_64x256x32x16_warps4xstages4() {
  unload_kernel_ad8f86f1_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x8_warps4xstages4
CUresult kernel_ae139aee_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ae139aee_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x8_warps4xstages4
void load_kernel_ae139aee_0d1d2d34567891011();
void load_kernel_64x256x64x8_warps4xstages4() {
  load_kernel_ae139aee_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x8_warps4xstages4
void unload_kernel_ae139aee_0d1d2d34567891011();
void unload_kernel_64x256x64x8_warps4xstages4() {
  unload_kernel_ae139aee_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x4_warps4xstages5
CUresult kernel_af542608_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_af542608_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x4_warps4xstages5
void load_kernel_af542608_0d1d2d34567891011();
void load_kernel_16x256x64x4_warps4xstages5() {
  load_kernel_af542608_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x4_warps4xstages5
void unload_kernel_af542608_0d1d2d34567891011();
void unload_kernel_16x256x64x4_warps4xstages5() {
  unload_kernel_af542608_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x16_warps2xstages4
CUresult kernel_af972d0b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_af972d0b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x16_warps2xstages4
void load_kernel_af972d0b_0d1d2d34567891011();
void load_kernel_128x64x32x16_warps2xstages4() {
  load_kernel_af972d0b_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x16_warps2xstages4
void unload_kernel_af972d0b_0d1d2d34567891011();
void unload_kernel_128x64x32x16_warps2xstages4() {
  unload_kernel_af972d0b_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x4_warps4xstages5
CUresult kernel_b114f8a3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_b114f8a3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x4_warps4xstages5
void load_kernel_b114f8a3_0d1d2d34567891011();
void load_kernel_32x256x32x4_warps4xstages5() {
  load_kernel_b114f8a3_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x4_warps4xstages5
void unload_kernel_b114f8a3_0d1d2d34567891011();
void unload_kernel_32x256x32x4_warps4xstages5() {
  unload_kernel_b114f8a3_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x16_warps4xstages4
CUresult kernel_b3d46ea1_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_b3d46ea1_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x16_warps4xstages4
void load_kernel_b3d46ea1_0d1d2d34567891011();
void load_kernel_32x128x32x16_warps4xstages4() {
  load_kernel_b3d46ea1_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x16_warps4xstages4
void unload_kernel_b3d46ea1_0d1d2d34567891011();
void unload_kernel_32x128x32x16_warps4xstages4() {
  unload_kernel_b3d46ea1_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x4_warps4xstages5
CUresult kernel_b666123f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_b666123f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x4_warps4xstages5
void load_kernel_b666123f_0d1d2d34567891011();
void load_kernel_128x128x32x4_warps4xstages5() {
  load_kernel_b666123f_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x4_warps4xstages5
void unload_kernel_b666123f_0d1d2d34567891011();
void unload_kernel_128x128x32x4_warps4xstages5() {
  unload_kernel_b666123f_0d1d2d34567891011();
}

// launcher for: kernel_128x64x64x4_warps2xstages5
CUresult kernel_b717d4e3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_b717d4e3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x64x4_warps2xstages5
void load_kernel_b717d4e3_0d1d2d34567891011();
void load_kernel_128x64x64x4_warps2xstages5() {
  load_kernel_b717d4e3_0d1d2d34567891011();
}

// unload for: kernel_128x64x64x4_warps2xstages5
void unload_kernel_b717d4e3_0d1d2d34567891011();
void unload_kernel_128x64x64x4_warps2xstages5() {
  unload_kernel_b717d4e3_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x4_warps2xstages5
CUresult kernel_babb08f0_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_babb08f0_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x4_warps2xstages5
void load_kernel_babb08f0_0d1d2d34567891011();
void load_kernel_32x64x64x4_warps2xstages5() {
  load_kernel_babb08f0_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x4_warps2xstages5
void unload_kernel_babb08f0_0d1d2d34567891011();
void unload_kernel_32x64x64x4_warps2xstages5() {
  unload_kernel_babb08f0_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x4_warps2xstages4
CUresult kernel_bbbda236_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_bbbda236_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x4_warps2xstages4
void load_kernel_bbbda236_0d1d2d34567891011();
void load_kernel_32x64x32x4_warps2xstages4() {
  load_kernel_bbbda236_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x4_warps2xstages4
void unload_kernel_bbbda236_0d1d2d34567891011();
void unload_kernel_32x64x32x4_warps2xstages4() {
  unload_kernel_bbbda236_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x8_warps2xstages5
CUresult kernel_bcc51275_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_bcc51275_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x8_warps2xstages5
void load_kernel_bcc51275_0d1d2d34567891011();
void load_kernel_32x64x32x8_warps2xstages5() {
  load_kernel_bcc51275_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x8_warps2xstages5
void unload_kernel_bcc51275_0d1d2d34567891011();
void unload_kernel_32x64x32x8_warps2xstages5() {
  unload_kernel_bcc51275_0d1d2d34567891011();
}

// launcher for: kernel_128x128x64x8_warps4xstages4
CUresult kernel_bd898e50_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_bd898e50_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x64x8_warps4xstages4
void load_kernel_bd898e50_0d1d2d34567891011();
void load_kernel_128x128x64x8_warps4xstages4() {
  load_kernel_bd898e50_0d1d2d34567891011();
}

// unload for: kernel_128x128x64x8_warps4xstages4
void unload_kernel_bd898e50_0d1d2d34567891011();
void unload_kernel_128x128x64x8_warps4xstages4() {
  unload_kernel_bd898e50_0d1d2d34567891011();
}

// launcher for: kernel_32x256x64x8_warps4xstages4
CUresult kernel_bdf24ed3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_bdf24ed3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x64x8_warps4xstages4
void load_kernel_bdf24ed3_0d1d2d34567891011();
void load_kernel_32x256x64x8_warps4xstages4() {
  load_kernel_bdf24ed3_0d1d2d34567891011();
}

// unload for: kernel_32x256x64x8_warps4xstages4
void unload_kernel_bdf24ed3_0d1d2d34567891011();
void unload_kernel_32x256x64x8_warps4xstages4() {
  unload_kernel_bdf24ed3_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x16_warps4xstages5
CUresult kernel_c2970f8e_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_c2970f8e_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x16_warps4xstages5
void load_kernel_c2970f8e_0d1d2d34567891011();
void load_kernel_64x256x64x16_warps4xstages5() {
  load_kernel_c2970f8e_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x16_warps4xstages5
void unload_kernel_c2970f8e_0d1d2d34567891011();
void unload_kernel_64x256x64x16_warps4xstages5() {
  unload_kernel_c2970f8e_0d1d2d34567891011();
}

// launcher for: kernel_16x256x32x16_warps4xstages4
CUresult kernel_c6ed82a9_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_c6ed82a9_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x32x16_warps4xstages4
void load_kernel_c6ed82a9_0d1d2d34567891011();
void load_kernel_16x256x32x16_warps4xstages4() {
  load_kernel_c6ed82a9_0d1d2d34567891011();
}

// unload for: kernel_16x256x32x16_warps4xstages4
void unload_kernel_c6ed82a9_0d1d2d34567891011();
void unload_kernel_16x256x32x16_warps4xstages4() {
  unload_kernel_c6ed82a9_0d1d2d34567891011();
}

// launcher for: kernel_32x128x32x4_warps4xstages4
CUresult kernel_c7603356_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_c7603356_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x32x4_warps4xstages4
void load_kernel_c7603356_0d1d2d34567891011();
void load_kernel_32x128x32x4_warps4xstages4() {
  load_kernel_c7603356_0d1d2d34567891011();
}

// unload for: kernel_32x128x32x4_warps4xstages4
void unload_kernel_c7603356_0d1d2d34567891011();
void unload_kernel_32x128x32x4_warps4xstages4() {
  unload_kernel_c7603356_0d1d2d34567891011();
}

// launcher for: kernel_128x256x32x8_warps4xstages4
CUresult kernel_c84588de_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_c84588de_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x32x8_warps4xstages4
void load_kernel_c84588de_0d1d2d34567891011();
void load_kernel_128x256x32x8_warps4xstages4() {
  load_kernel_c84588de_0d1d2d34567891011();
}

// unload for: kernel_128x256x32x8_warps4xstages4
void unload_kernel_c84588de_0d1d2d34567891011();
void unload_kernel_128x256x32x8_warps4xstages4() {
  unload_kernel_c84588de_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x8_warps4xstages4
CUresult kernel_c8ce3dae_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_c8ce3dae_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x8_warps4xstages4
void load_kernel_c8ce3dae_0d1d2d34567891011();
void load_kernel_32x256x32x8_warps4xstages4() {
  load_kernel_c8ce3dae_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x8_warps4xstages4
void unload_kernel_c8ce3dae_0d1d2d34567891011();
void unload_kernel_32x256x32x8_warps4xstages4() {
  unload_kernel_c8ce3dae_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x4_warps4xstages5
CUresult kernel_cb4fcde3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_cb4fcde3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x4_warps4xstages5
void load_kernel_cb4fcde3_0d1d2d34567891011();
void load_kernel_64x256x64x4_warps4xstages5() {
  load_kernel_cb4fcde3_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x4_warps4xstages5
void unload_kernel_cb4fcde3_0d1d2d34567891011();
void unload_kernel_64x256x64x4_warps4xstages5() {
  unload_kernel_cb4fcde3_0d1d2d34567891011();
}

// launcher for: kernel_64x256x64x16_warps4xstages4
CUresult kernel_ce16e293_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ce16e293_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x64x16_warps4xstages4
void load_kernel_ce16e293_0d1d2d34567891011();
void load_kernel_64x256x64x16_warps4xstages4() {
  load_kernel_ce16e293_0d1d2d34567891011();
}

// unload for: kernel_64x256x64x16_warps4xstages4
void unload_kernel_ce16e293_0d1d2d34567891011();
void unload_kernel_64x256x64x16_warps4xstages4() {
  unload_kernel_ce16e293_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x8_warps4xstages4
CUresult kernel_ce53fe4a_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ce53fe4a_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x8_warps4xstages4
void load_kernel_ce53fe4a_0d1d2d34567891011();
void load_kernel_64x256x32x8_warps4xstages4() {
  load_kernel_ce53fe4a_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x8_warps4xstages4
void unload_kernel_ce53fe4a_0d1d2d34567891011();
void unload_kernel_64x256x32x8_warps4xstages4() {
  unload_kernel_ce53fe4a_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x8_warps2xstages4
CUresult kernel_cec29660_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_cec29660_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x8_warps2xstages4
void load_kernel_cec29660_0d1d2d34567891011();
void load_kernel_128x64x32x8_warps2xstages4() {
  load_kernel_cec29660_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x8_warps2xstages4
void unload_kernel_cec29660_0d1d2d34567891011();
void unload_kernel_128x64x32x8_warps2xstages4() {
  unload_kernel_cec29660_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x16_warps2xstages5
CUresult kernel_cf98af0c_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_cf98af0c_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x16_warps2xstages5
void load_kernel_cf98af0c_0d1d2d34567891011();
void load_kernel_32x64x64x16_warps2xstages5() {
  load_kernel_cf98af0c_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x16_warps2xstages5
void unload_kernel_cf98af0c_0d1d2d34567891011();
void unload_kernel_32x64x64x16_warps2xstages5() {
  unload_kernel_cf98af0c_0d1d2d34567891011();
}

// launcher for: kernel_64x64x32x4_warps2xstages5
CUresult kernel_d007ba3f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d007ba3f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x64x32x4_warps2xstages5
void load_kernel_d007ba3f_0d1d2d34567891011();
void load_kernel_64x64x32x4_warps2xstages5() {
  load_kernel_d007ba3f_0d1d2d34567891011();
}

// unload for: kernel_64x64x32x4_warps2xstages5
void unload_kernel_d007ba3f_0d1d2d34567891011();
void unload_kernel_64x64x32x4_warps2xstages5() {
  unload_kernel_d007ba3f_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x4_warps4xstages4
CUresult kernel_d276893e_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x4_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d276893e_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x4_warps4xstages4
void load_kernel_d276893e_0d1d2d34567891011();
void load_kernel_16x128x32x4_warps4xstages4() {
  load_kernel_d276893e_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x4_warps4xstages4
void unload_kernel_d276893e_0d1d2d34567891011();
void unload_kernel_16x128x32x4_warps4xstages4() {
  unload_kernel_d276893e_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x4_warps2xstages5
CUresult kernel_d3f2a44f_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x4_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d3f2a44f_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x4_warps2xstages5
void load_kernel_d3f2a44f_0d1d2d34567891011();
void load_kernel_32x64x32x4_warps2xstages5() {
  load_kernel_d3f2a44f_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x4_warps2xstages5
void unload_kernel_d3f2a44f_0d1d2d34567891011();
void unload_kernel_32x64x32x4_warps2xstages5() {
  unload_kernel_d3f2a44f_0d1d2d34567891011();
}

// launcher for: kernel_128x64x32x8_warps2xstages5
CUresult kernel_d55fb2e9_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d55fb2e9_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x64x32x8_warps2xstages5
void load_kernel_d55fb2e9_0d1d2d34567891011();
void load_kernel_128x64x32x8_warps2xstages5() {
  load_kernel_d55fb2e9_0d1d2d34567891011();
}

// unload for: kernel_128x64x32x8_warps2xstages5
void unload_kernel_d55fb2e9_0d1d2d34567891011();
void unload_kernel_128x64x32x8_warps2xstages5() {
  unload_kernel_d55fb2e9_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x16_warps2xstages4
CUresult kernel_d78a532d_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x16_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d78a532d_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x16_warps2xstages4
void load_kernel_d78a532d_0d1d2d34567891011();
void load_kernel_32x64x64x16_warps2xstages4() {
  load_kernel_d78a532d_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x16_warps2xstages4
void unload_kernel_d78a532d_0d1d2d34567891011();
void unload_kernel_32x64x64x16_warps2xstages4() {
  unload_kernel_d78a532d_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x16_warps4xstages5
CUresult kernel_d90111eb_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x16_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d90111eb_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x16_warps4xstages5
void load_kernel_d90111eb_0d1d2d34567891011();
void load_kernel_64x256x32x16_warps4xstages5() {
  load_kernel_d90111eb_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x16_warps4xstages5
void unload_kernel_d90111eb_0d1d2d34567891011();
void unload_kernel_64x256x32x16_warps4xstages5() {
  unload_kernel_d90111eb_0d1d2d34567891011();
}

// launcher for: kernel_32x128x64x16_warps4xstages4
CUresult kernel_d93aba62_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d93aba62_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x16_warps4xstages4
void load_kernel_d93aba62_0d1d2d34567891011();
void load_kernel_32x128x64x16_warps4xstages4() {
  load_kernel_d93aba62_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x16_warps4xstages4
void unload_kernel_d93aba62_0d1d2d34567891011();
void unload_kernel_32x128x64x16_warps4xstages4() {
  unload_kernel_d93aba62_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x16_warps4xstages4
CUresult kernel_d9945e69_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_d9945e69_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x16_warps4xstages4
void load_kernel_d9945e69_0d1d2d34567891011();
void load_kernel_32x256x32x16_warps4xstages4() {
  load_kernel_d9945e69_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x16_warps4xstages4
void unload_kernel_d9945e69_0d1d2d34567891011();
void unload_kernel_32x256x32x16_warps4xstages4() {
  unload_kernel_d9945e69_0d1d2d34567891011();
}

// launcher for: kernel_32x64x32x16_warps2xstages5
CUresult kernel_da01dcef_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x32x16_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_da01dcef_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x32x16_warps2xstages5
void load_kernel_da01dcef_0d1d2d34567891011();
void load_kernel_32x64x32x16_warps2xstages5() {
  load_kernel_da01dcef_0d1d2d34567891011();
}

// unload for: kernel_32x64x32x16_warps2xstages5
void unload_kernel_da01dcef_0d1d2d34567891011();
void unload_kernel_32x64x32x16_warps2xstages5() {
  unload_kernel_da01dcef_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x8_warps2xstages5
CUresult kernel_decc8825_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_decc8825_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x8_warps2xstages5
void load_kernel_decc8825_0d1d2d34567891011();
void load_kernel_16x64x32x8_warps2xstages5() {
  load_kernel_decc8825_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x8_warps2xstages5
void unload_kernel_decc8825_0d1d2d34567891011();
void unload_kernel_16x64x32x8_warps2xstages5() {
  unload_kernel_decc8825_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x8_warps2xstages4
CUresult kernel_df6f2ff3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x8_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_df6f2ff3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x8_warps2xstages4
void load_kernel_df6f2ff3_0d1d2d34567891011();
void load_kernel_16x64x32x8_warps2xstages4() {
  load_kernel_df6f2ff3_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x8_warps2xstages4
void unload_kernel_df6f2ff3_0d1d2d34567891011();
void unload_kernel_16x64x32x8_warps2xstages4() {
  unload_kernel_df6f2ff3_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x8_warps4xstages4
CUresult kernel_df934e7b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_df934e7b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x8_warps4xstages4
void load_kernel_df934e7b_0d1d2d34567891011();
void load_kernel_128x256x64x8_warps4xstages4() {
  load_kernel_df934e7b_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x8_warps4xstages4
void unload_kernel_df934e7b_0d1d2d34567891011();
void unload_kernel_128x256x64x8_warps4xstages4() {
  unload_kernel_df934e7b_0d1d2d34567891011();
}

// launcher for: kernel_16x256x64x8_warps4xstages4
CUresult kernel_e01ef3d8_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x256x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_e01ef3d8_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x256x64x8_warps4xstages4
void load_kernel_e01ef3d8_0d1d2d34567891011();
void load_kernel_16x256x64x8_warps4xstages4() {
  load_kernel_e01ef3d8_0d1d2d34567891011();
}

// unload for: kernel_16x256x64x8_warps4xstages4
void unload_kernel_e01ef3d8_0d1d2d34567891011();
void unload_kernel_16x256x64x8_warps4xstages4() {
  unload_kernel_e01ef3d8_0d1d2d34567891011();
}

// launcher for: kernel_16x64x64x8_warps2xstages5
CUresult kernel_e1807783_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x64x8_warps2xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_e1807783_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x64x8_warps2xstages5
void load_kernel_e1807783_0d1d2d34567891011();
void load_kernel_16x64x64x8_warps2xstages5() {
  load_kernel_e1807783_0d1d2d34567891011();
}

// unload for: kernel_16x64x64x8_warps2xstages5
void unload_kernel_e1807783_0d1d2d34567891011();
void unload_kernel_16x64x64x8_warps2xstages5() {
  unload_kernel_e1807783_0d1d2d34567891011();
}

// launcher for: kernel_64x128x64x16_warps4xstages4
CUresult kernel_e48cc09d_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x128x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_e48cc09d_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x128x64x16_warps4xstages4
void load_kernel_e48cc09d_0d1d2d34567891011();
void load_kernel_64x128x64x16_warps4xstages4() {
  load_kernel_e48cc09d_0d1d2d34567891011();
}

// unload for: kernel_64x128x64x16_warps4xstages4
void unload_kernel_e48cc09d_0d1d2d34567891011();
void unload_kernel_64x128x64x16_warps4xstages4() {
  unload_kernel_e48cc09d_0d1d2d34567891011();
}

// launcher for: kernel_16x128x32x8_warps4xstages4
CUresult kernel_e671957b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x128x32x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_e671957b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x128x32x8_warps4xstages4
void load_kernel_e671957b_0d1d2d34567891011();
void load_kernel_16x128x32x8_warps4xstages4() {
  load_kernel_e671957b_0d1d2d34567891011();
}

// unload for: kernel_16x128x32x8_warps4xstages4
void unload_kernel_e671957b_0d1d2d34567891011();
void unload_kernel_16x128x32x8_warps4xstages4() {
  unload_kernel_e671957b_0d1d2d34567891011();
}

// launcher for: kernel_32x256x32x8_warps4xstages5
CUresult kernel_e89fefd3_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x256x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_e89fefd3_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x256x32x8_warps4xstages5
void load_kernel_e89fefd3_0d1d2d34567891011();
void load_kernel_32x256x32x8_warps4xstages5() {
  load_kernel_e89fefd3_0d1d2d34567891011();
}

// unload for: kernel_32x256x32x8_warps4xstages5
void unload_kernel_e89fefd3_0d1d2d34567891011();
void unload_kernel_32x256x32x8_warps4xstages5() {
  unload_kernel_e89fefd3_0d1d2d34567891011();
}

// launcher for: kernel_32x128x64x8_warps4xstages4
CUresult kernel_eb01b219_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x8_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_eb01b219_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x8_warps4xstages4
void load_kernel_eb01b219_0d1d2d34567891011();
void load_kernel_32x128x64x8_warps4xstages4() {
  load_kernel_eb01b219_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x8_warps4xstages4
void unload_kernel_eb01b219_0d1d2d34567891011();
void unload_kernel_32x128x64x8_warps4xstages4() {
  unload_kernel_eb01b219_0d1d2d34567891011();
}

// launcher for: kernel_128x128x32x8_warps4xstages5
CUresult kernel_ebec36f8_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x128x32x8_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ebec36f8_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x128x32x8_warps4xstages5
void load_kernel_ebec36f8_0d1d2d34567891011();
void load_kernel_128x128x32x8_warps4xstages5() {
  load_kernel_ebec36f8_0d1d2d34567891011();
}

// unload for: kernel_128x128x32x8_warps4xstages5
void unload_kernel_ebec36f8_0d1d2d34567891011();
void unload_kernel_128x128x32x8_warps4xstages5() {
  unload_kernel_ebec36f8_0d1d2d34567891011();
}

// launcher for: kernel_32x128x64x4_warps4xstages5
CUresult kernel_ef501fda_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x128x64x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_ef501fda_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x128x64x4_warps4xstages5
void load_kernel_ef501fda_0d1d2d34567891011();
void load_kernel_32x128x64x4_warps4xstages5() {
  load_kernel_ef501fda_0d1d2d34567891011();
}

// unload for: kernel_32x128x64x4_warps4xstages5
void unload_kernel_ef501fda_0d1d2d34567891011();
void unload_kernel_32x128x64x4_warps4xstages5() {
  unload_kernel_ef501fda_0d1d2d34567891011();
}

// launcher for: kernel_128x256x64x16_warps4xstages4
CUresult kernel_f295360d_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_128x256x64x16_warps4xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_f295360d_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_128x256x64x16_warps4xstages4
void load_kernel_f295360d_0d1d2d34567891011();
void load_kernel_128x256x64x16_warps4xstages4() {
  load_kernel_f295360d_0d1d2d34567891011();
}

// unload for: kernel_128x256x64x16_warps4xstages4
void unload_kernel_f295360d_0d1d2d34567891011();
void unload_kernel_128x256x64x16_warps4xstages4() {
  unload_kernel_f295360d_0d1d2d34567891011();
}

// launcher for: kernel_32x64x64x4_warps2xstages4
CUresult kernel_f2c3539b_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_32x64x64x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_f2c3539b_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_32x64x64x4_warps2xstages4
void load_kernel_f2c3539b_0d1d2d34567891011();
void load_kernel_32x64x64x4_warps2xstages4() {
  load_kernel_f2c3539b_0d1d2d34567891011();
}

// unload for: kernel_32x64x64x4_warps2xstages4
void unload_kernel_f2c3539b_0d1d2d34567891011();
void unload_kernel_32x64x64x4_warps2xstages4() {
  unload_kernel_f2c3539b_0d1d2d34567891011();
}

// launcher for: kernel_64x256x32x4_warps4xstages5
CUresult kernel_f775d919_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_64x256x32x4_warps4xstages5(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_f775d919_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_64x256x32x4_warps4xstages5
void load_kernel_f775d919_0d1d2d34567891011();
void load_kernel_64x256x32x4_warps4xstages5() {
  load_kernel_f775d919_0d1d2d34567891011();
}

// unload for: kernel_64x256x32x4_warps4xstages5
void unload_kernel_f775d919_0d1d2d34567891011();
void unload_kernel_64x256x32x4_warps4xstages5() {
  unload_kernel_f775d919_0d1d2d34567891011();
}

// launcher for: kernel_16x64x32x4_warps2xstages4
CUresult kernel_fd75c437_0d1d2d34567891011(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);

CUresult kernel_16x64x32x4_warps2xstages4(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  if ((a_ptr % 16 == 0) && (b_ptr % 16 == 0) && (c_ptr % 16 == 0))
    return kernel_fd75c437_0d1d2d34567891011(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);

  return CUDA_ERROR_INVALID_VALUE;
}

// load for: kernel_16x64x32x4_warps2xstages4
void load_kernel_fd75c437_0d1d2d34567891011();
void load_kernel_16x64x32x4_warps2xstages4() {
  load_kernel_fd75c437_0d1d2d34567891011();
}

// unload for: kernel_16x64x32x4_warps2xstages4
void unload_kernel_fd75c437_0d1d2d34567891011();
void unload_kernel_16x64x32x4_warps2xstages4() {
  unload_kernel_fd75c437_0d1d2d34567891011();
}

typedef CUresult (*kernel_func_t)(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn);
kernel_func_t kernel_kernels[] = {
  kernel_32x128x64x8_warps4xstages5,
  kernel_64x128x64x4_warps4xstages4,
  kernel_128x64x64x16_warps2xstages4,
  kernel_128x256x32x4_warps4xstages5,
  kernel_32x128x32x4_warps4xstages5,
  kernel_16x64x32x16_warps2xstages5,
  kernel_128x128x32x8_warps4xstages4,
  kernel_16x128x32x8_warps4xstages5,
  kernel_32x64x64x8_warps2xstages4,
  kernel_128x128x64x16_warps4xstages5,
  kernel_128x128x32x16_warps4xstages4,
  kernel_64x64x32x8_warps2xstages5,
  kernel_16x128x64x16_warps4xstages4,
  kernel_32x64x64x8_warps2xstages5,
  kernel_16x64x64x8_warps2xstages4,
  kernel_128x256x64x16_warps4xstages5,
  kernel_64x128x32x4_warps4xstages5,
  kernel_128x64x64x16_warps2xstages5,
  kernel_16x64x64x4_warps2xstages4,
  kernel_16x64x32x4_warps2xstages5,
  kernel_16x64x32x16_warps2xstages4,
  kernel_128x128x64x16_warps4xstages4,
  kernel_64x128x64x8_warps4xstages4,
  kernel_64x128x32x8_warps4xstages4,
  kernel_128x64x32x4_warps2xstages4,
  kernel_16x64x64x16_warps2xstages5,
  kernel_32x256x32x16_warps4xstages5,
  kernel_32x256x32x4_warps4xstages4,
  kernel_64x64x64x4_warps2xstages5,
  kernel_32x256x64x16_warps4xstages4,
  kernel_16x256x64x4_warps4xstages4,
  kernel_32x128x64x16_warps4xstages5,
  kernel_16x256x32x16_warps4xstages5,
  kernel_16x64x64x16_warps2xstages4,
  kernel_128x64x32x16_warps2xstages5,
  kernel_32x256x64x16_warps4xstages5,
  kernel_64x128x64x8_warps4xstages5,
  kernel_128x64x32x4_warps2xstages5,
  kernel_32x64x32x16_warps2xstages4,
  kernel_64x128x32x16_warps4xstages5,
  kernel_64x64x64x16_warps2xstages5,
  kernel_32x256x64x8_warps4xstages5,
  kernel_16x128x64x8_warps4xstages5,
  kernel_64x256x32x8_warps4xstages5,
  kernel_128x128x64x4_warps4xstages5,
  kernel_128x256x32x8_warps4xstages5,
  kernel_16x256x32x8_warps4xstages5,
  kernel_128x256x64x8_warps4xstages5,
  kernel_64x64x64x8_warps2xstages4,
  kernel_64x64x32x4_warps2xstages4,
  kernel_64x256x64x4_warps4xstages4,
  kernel_128x128x64x8_warps4xstages5,
  kernel_16x256x32x4_warps4xstages4,
  kernel_128x64x64x8_warps2xstages4,
  kernel_128x256x32x16_warps4xstages5,
  kernel_16x128x64x8_warps4xstages4,
  kernel_64x64x32x8_warps2xstages4,
  kernel_64x128x64x4_warps4xstages5,
  kernel_128x256x32x4_warps4xstages4,
  kernel_32x64x32x8_warps2xstages4,
  kernel_32x128x32x16_warps4xstages5,
  kernel_16x256x32x8_warps4xstages4,
  kernel_16x64x64x4_warps2xstages5,
  kernel_16x256x64x16_warps4xstages5,
  kernel_128x256x64x4_warps4xstages5,
  kernel_16x256x64x8_warps4xstages5,
  kernel_16x128x32x16_warps4xstages4,
  kernel_128x64x64x4_warps2xstages4,
  kernel_128x128x64x4_warps4xstages4,
  kernel_16x128x64x4_warps4xstages5,
  kernel_32x256x64x4_warps4xstages4,
  kernel_16x256x32x4_warps4xstages5,
  kernel_128x128x32x4_warps4xstages4,
  kernel_32x128x32x8_warps4xstages5,
  kernel_128x128x32x16_warps4xstages5,
  kernel_32x128x32x8_warps4xstages4,
  kernel_64x128x32x16_warps4xstages4,
  kernel_16x128x64x16_warps4xstages5,
  kernel_64x64x64x16_warps2xstages4,
  kernel_32x256x64x4_warps4xstages5,
  kernel_16x128x32x16_warps4xstages5,
  kernel_16x256x64x16_warps4xstages4,
  kernel_64x64x64x8_warps2xstages5,
  kernel_64x64x32x16_warps2xstages5,
  kernel_64x256x32x4_warps4xstages4,
  kernel_128x256x32x16_warps4xstages4,
  kernel_64x64x64x4_warps2xstages4,
  kernel_128x256x64x4_warps4xstages4,
  kernel_16x128x64x4_warps4xstages4,
  kernel_32x128x64x4_warps4xstages4,
  kernel_64x64x32x16_warps2xstages4,
  kernel_64x128x32x4_warps4xstages4,
  kernel_64x128x64x16_warps4xstages5,
  kernel_64x256x64x8_warps4xstages5,
  kernel_128x64x64x8_warps2xstages5,
  kernel_16x128x32x4_warps4xstages5,
  kernel_64x128x32x8_warps4xstages5,
  kernel_64x256x32x16_warps4xstages4,
  kernel_64x256x64x8_warps4xstages4,
  kernel_16x256x64x4_warps4xstages5,
  kernel_128x64x32x16_warps2xstages4,
  kernel_32x256x32x4_warps4xstages5,
  kernel_32x128x32x16_warps4xstages4,
  kernel_128x128x32x4_warps4xstages5,
  kernel_128x64x64x4_warps2xstages5,
  kernel_32x64x64x4_warps2xstages5,
  kernel_32x64x32x4_warps2xstages4,
  kernel_32x64x32x8_warps2xstages5,
  kernel_128x128x64x8_warps4xstages4,
  kernel_32x256x64x8_warps4xstages4,
  kernel_64x256x64x16_warps4xstages5,
  kernel_16x256x32x16_warps4xstages4,
  kernel_32x128x32x4_warps4xstages4,
  kernel_128x256x32x8_warps4xstages4,
  kernel_32x256x32x8_warps4xstages4,
  kernel_64x256x64x4_warps4xstages5,
  kernel_64x256x64x16_warps4xstages4,
  kernel_64x256x32x8_warps4xstages4,
  kernel_128x64x32x8_warps2xstages4,
  kernel_32x64x64x16_warps2xstages5,
  kernel_64x64x32x4_warps2xstages5,
  kernel_16x128x32x4_warps4xstages4,
  kernel_32x64x32x4_warps2xstages5,
  kernel_128x64x32x8_warps2xstages5,
  kernel_32x64x64x16_warps2xstages4,
  kernel_64x256x32x16_warps4xstages5,
  kernel_32x128x64x16_warps4xstages4,
  kernel_32x256x32x16_warps4xstages4,
  kernel_32x64x32x16_warps2xstages5,
  kernel_16x64x32x8_warps2xstages5,
  kernel_16x64x32x8_warps2xstages4,
  kernel_128x256x64x8_warps4xstages4,
  kernel_16x256x64x8_warps4xstages4,
  kernel_16x64x64x8_warps2xstages5,
  kernel_64x128x64x16_warps4xstages4,
  kernel_16x128x32x8_warps4xstages4,
  kernel_32x256x32x8_warps4xstages5,
  kernel_32x128x64x8_warps4xstages4,
  kernel_128x128x32x8_warps4xstages5,
  kernel_32x128x64x4_warps4xstages5,
  kernel_128x256x64x16_warps4xstages4,
  kernel_32x64x64x4_warps2xstages4,
  kernel_64x256x32x4_warps4xstages5,
  kernel_16x64x32x4_warps2xstages4,
};

int kernel_get_num_algos(void){
  return (int)(sizeof(kernel_kernels) / sizeof(kernel_kernels[0]));
}

CUresult kernel(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn, int algo_id){
  assert (algo_id < (int)sizeof(kernel_kernels));
  return kernel_kernels[algo_id](stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn);
}

void load_kernel(void){
  load_kernel_32x128x64x8_warps4xstages5();
  load_kernel_64x128x64x4_warps4xstages4();
  load_kernel_128x64x64x16_warps2xstages4();
  load_kernel_128x256x32x4_warps4xstages5();
  load_kernel_32x128x32x4_warps4xstages5();
  load_kernel_16x64x32x16_warps2xstages5();
  load_kernel_128x128x32x8_warps4xstages4();
  load_kernel_16x128x32x8_warps4xstages5();
  load_kernel_32x64x64x8_warps2xstages4();
  load_kernel_128x128x64x16_warps4xstages5();
  load_kernel_128x128x32x16_warps4xstages4();
  load_kernel_64x64x32x8_warps2xstages5();
  load_kernel_16x128x64x16_warps4xstages4();
  load_kernel_32x64x64x8_warps2xstages5();
  load_kernel_16x64x64x8_warps2xstages4();
  load_kernel_128x256x64x16_warps4xstages5();
  load_kernel_64x128x32x4_warps4xstages5();
  load_kernel_128x64x64x16_warps2xstages5();
  load_kernel_16x64x64x4_warps2xstages4();
  load_kernel_16x64x32x4_warps2xstages5();
  load_kernel_16x64x32x16_warps2xstages4();
  load_kernel_128x128x64x16_warps4xstages4();
  load_kernel_64x128x64x8_warps4xstages4();
  load_kernel_64x128x32x8_warps4xstages4();
  load_kernel_128x64x32x4_warps2xstages4();
  load_kernel_16x64x64x16_warps2xstages5();
  load_kernel_32x256x32x16_warps4xstages5();
  load_kernel_32x256x32x4_warps4xstages4();
  load_kernel_64x64x64x4_warps2xstages5();
  load_kernel_32x256x64x16_warps4xstages4();
  load_kernel_16x256x64x4_warps4xstages4();
  load_kernel_32x128x64x16_warps4xstages5();
  load_kernel_16x256x32x16_warps4xstages5();
  load_kernel_16x64x64x16_warps2xstages4();
  load_kernel_128x64x32x16_warps2xstages5();
  load_kernel_32x256x64x16_warps4xstages5();
  load_kernel_64x128x64x8_warps4xstages5();
  load_kernel_128x64x32x4_warps2xstages5();
  load_kernel_32x64x32x16_warps2xstages4();
  load_kernel_64x128x32x16_warps4xstages5();
  load_kernel_64x64x64x16_warps2xstages5();
  load_kernel_32x256x64x8_warps4xstages5();
  load_kernel_16x128x64x8_warps4xstages5();
  load_kernel_64x256x32x8_warps4xstages5();
  load_kernel_128x128x64x4_warps4xstages5();
  load_kernel_128x256x32x8_warps4xstages5();
  load_kernel_16x256x32x8_warps4xstages5();
  load_kernel_128x256x64x8_warps4xstages5();
  load_kernel_64x64x64x8_warps2xstages4();
  load_kernel_64x64x32x4_warps2xstages4();
  load_kernel_64x256x64x4_warps4xstages4();
  load_kernel_128x128x64x8_warps4xstages5();
  load_kernel_16x256x32x4_warps4xstages4();
  load_kernel_128x64x64x8_warps2xstages4();
  load_kernel_128x256x32x16_warps4xstages5();
  load_kernel_16x128x64x8_warps4xstages4();
  load_kernel_64x64x32x8_warps2xstages4();
  load_kernel_64x128x64x4_warps4xstages5();
  load_kernel_128x256x32x4_warps4xstages4();
  load_kernel_32x64x32x8_warps2xstages4();
  load_kernel_32x128x32x16_warps4xstages5();
  load_kernel_16x256x32x8_warps4xstages4();
  load_kernel_16x64x64x4_warps2xstages5();
  load_kernel_16x256x64x16_warps4xstages5();
  load_kernel_128x256x64x4_warps4xstages5();
  load_kernel_16x256x64x8_warps4xstages5();
  load_kernel_16x128x32x16_warps4xstages4();
  load_kernel_128x64x64x4_warps2xstages4();
  load_kernel_128x128x64x4_warps4xstages4();
  load_kernel_16x128x64x4_warps4xstages5();
  load_kernel_32x256x64x4_warps4xstages4();
  load_kernel_16x256x32x4_warps4xstages5();
  load_kernel_128x128x32x4_warps4xstages4();
  load_kernel_32x128x32x8_warps4xstages5();
  load_kernel_128x128x32x16_warps4xstages5();
  load_kernel_32x128x32x8_warps4xstages4();
  load_kernel_64x128x32x16_warps4xstages4();
  load_kernel_16x128x64x16_warps4xstages5();
  load_kernel_64x64x64x16_warps2xstages4();
  load_kernel_32x256x64x4_warps4xstages5();
  load_kernel_16x128x32x16_warps4xstages5();
  load_kernel_16x256x64x16_warps4xstages4();
  load_kernel_64x64x64x8_warps2xstages5();
  load_kernel_64x64x32x16_warps2xstages5();
  load_kernel_64x256x32x4_warps4xstages4();
  load_kernel_128x256x32x16_warps4xstages4();
  load_kernel_64x64x64x4_warps2xstages4();
  load_kernel_128x256x64x4_warps4xstages4();
  load_kernel_16x128x64x4_warps4xstages4();
  load_kernel_32x128x64x4_warps4xstages4();
  load_kernel_64x64x32x16_warps2xstages4();
  load_kernel_64x128x32x4_warps4xstages4();
  load_kernel_64x128x64x16_warps4xstages5();
  load_kernel_64x256x64x8_warps4xstages5();
  load_kernel_128x64x64x8_warps2xstages5();
  load_kernel_16x128x32x4_warps4xstages5();
  load_kernel_64x128x32x8_warps4xstages5();
  load_kernel_64x256x32x16_warps4xstages4();
  load_kernel_64x256x64x8_warps4xstages4();
  load_kernel_16x256x64x4_warps4xstages5();
  load_kernel_128x64x32x16_warps2xstages4();
  load_kernel_32x256x32x4_warps4xstages5();
  load_kernel_32x128x32x16_warps4xstages4();
  load_kernel_128x128x32x4_warps4xstages5();
  load_kernel_128x64x64x4_warps2xstages5();
  load_kernel_32x64x64x4_warps2xstages5();
  load_kernel_32x64x32x4_warps2xstages4();
  load_kernel_32x64x32x8_warps2xstages5();
  load_kernel_128x128x64x8_warps4xstages4();
  load_kernel_32x256x64x8_warps4xstages4();
  load_kernel_64x256x64x16_warps4xstages5();
  load_kernel_16x256x32x16_warps4xstages4();
  load_kernel_32x128x32x4_warps4xstages4();
  load_kernel_128x256x32x8_warps4xstages4();
  load_kernel_32x256x32x8_warps4xstages4();
  load_kernel_64x256x64x4_warps4xstages5();
  load_kernel_64x256x64x16_warps4xstages4();
  load_kernel_64x256x32x8_warps4xstages4();
  load_kernel_128x64x32x8_warps2xstages4();
  load_kernel_32x64x64x16_warps2xstages5();
  load_kernel_64x64x32x4_warps2xstages5();
  load_kernel_16x128x32x4_warps4xstages4();
  load_kernel_32x64x32x4_warps2xstages5();
  load_kernel_128x64x32x8_warps2xstages5();
  load_kernel_32x64x64x16_warps2xstages4();
  load_kernel_64x256x32x16_warps4xstages5();
  load_kernel_32x128x64x16_warps4xstages4();
  load_kernel_32x256x32x16_warps4xstages4();
  load_kernel_32x64x32x16_warps2xstages5();
  load_kernel_16x64x32x8_warps2xstages5();
  load_kernel_16x64x32x8_warps2xstages4();
  load_kernel_128x256x64x8_warps4xstages4();
  load_kernel_16x256x64x8_warps4xstages4();
  load_kernel_16x64x64x8_warps2xstages5();
  load_kernel_64x128x64x16_warps4xstages4();
  load_kernel_16x128x32x8_warps4xstages4();
  load_kernel_32x256x32x8_warps4xstages5();
  load_kernel_32x128x64x8_warps4xstages4();
  load_kernel_128x128x32x8_warps4xstages5();
  load_kernel_32x128x64x4_warps4xstages5();
  load_kernel_128x256x64x16_warps4xstages4();
  load_kernel_32x64x64x4_warps2xstages4();
  load_kernel_64x256x32x4_warps4xstages5();
  load_kernel_16x64x32x4_warps2xstages4();
}

void unload_kernel(void){
  unload_kernel_32x128x64x8_warps4xstages5();
  unload_kernel_64x128x64x4_warps4xstages4();
  unload_kernel_128x64x64x16_warps2xstages4();
  unload_kernel_128x256x32x4_warps4xstages5();
  unload_kernel_32x128x32x4_warps4xstages5();
  unload_kernel_16x64x32x16_warps2xstages5();
  unload_kernel_128x128x32x8_warps4xstages4();
  unload_kernel_16x128x32x8_warps4xstages5();
  unload_kernel_32x64x64x8_warps2xstages4();
  unload_kernel_128x128x64x16_warps4xstages5();
  unload_kernel_128x128x32x16_warps4xstages4();
  unload_kernel_64x64x32x8_warps2xstages5();
  unload_kernel_16x128x64x16_warps4xstages4();
  unload_kernel_32x64x64x8_warps2xstages5();
  unload_kernel_16x64x64x8_warps2xstages4();
  unload_kernel_128x256x64x16_warps4xstages5();
  unload_kernel_64x128x32x4_warps4xstages5();
  unload_kernel_128x64x64x16_warps2xstages5();
  unload_kernel_16x64x64x4_warps2xstages4();
  unload_kernel_16x64x32x4_warps2xstages5();
  unload_kernel_16x64x32x16_warps2xstages4();
  unload_kernel_128x128x64x16_warps4xstages4();
  unload_kernel_64x128x64x8_warps4xstages4();
  unload_kernel_64x128x32x8_warps4xstages4();
  unload_kernel_128x64x32x4_warps2xstages4();
  unload_kernel_16x64x64x16_warps2xstages5();
  unload_kernel_32x256x32x16_warps4xstages5();
  unload_kernel_32x256x32x4_warps4xstages4();
  unload_kernel_64x64x64x4_warps2xstages5();
  unload_kernel_32x256x64x16_warps4xstages4();
  unload_kernel_16x256x64x4_warps4xstages4();
  unload_kernel_32x128x64x16_warps4xstages5();
  unload_kernel_16x256x32x16_warps4xstages5();
  unload_kernel_16x64x64x16_warps2xstages4();
  unload_kernel_128x64x32x16_warps2xstages5();
  unload_kernel_32x256x64x16_warps4xstages5();
  unload_kernel_64x128x64x8_warps4xstages5();
  unload_kernel_128x64x32x4_warps2xstages5();
  unload_kernel_32x64x32x16_warps2xstages4();
  unload_kernel_64x128x32x16_warps4xstages5();
  unload_kernel_64x64x64x16_warps2xstages5();
  unload_kernel_32x256x64x8_warps4xstages5();
  unload_kernel_16x128x64x8_warps4xstages5();
  unload_kernel_64x256x32x8_warps4xstages5();
  unload_kernel_128x128x64x4_warps4xstages5();
  unload_kernel_128x256x32x8_warps4xstages5();
  unload_kernel_16x256x32x8_warps4xstages5();
  unload_kernel_128x256x64x8_warps4xstages5();
  unload_kernel_64x64x64x8_warps2xstages4();
  unload_kernel_64x64x32x4_warps2xstages4();
  unload_kernel_64x256x64x4_warps4xstages4();
  unload_kernel_128x128x64x8_warps4xstages5();
  unload_kernel_16x256x32x4_warps4xstages4();
  unload_kernel_128x64x64x8_warps2xstages4();
  unload_kernel_128x256x32x16_warps4xstages5();
  unload_kernel_16x128x64x8_warps4xstages4();
  unload_kernel_64x64x32x8_warps2xstages4();
  unload_kernel_64x128x64x4_warps4xstages5();
  unload_kernel_128x256x32x4_warps4xstages4();
  unload_kernel_32x64x32x8_warps2xstages4();
  unload_kernel_32x128x32x16_warps4xstages5();
  unload_kernel_16x256x32x8_warps4xstages4();
  unload_kernel_16x64x64x4_warps2xstages5();
  unload_kernel_16x256x64x16_warps4xstages5();
  unload_kernel_128x256x64x4_warps4xstages5();
  unload_kernel_16x256x64x8_warps4xstages5();
  unload_kernel_16x128x32x16_warps4xstages4();
  unload_kernel_128x64x64x4_warps2xstages4();
  unload_kernel_128x128x64x4_warps4xstages4();
  unload_kernel_16x128x64x4_warps4xstages5();
  unload_kernel_32x256x64x4_warps4xstages4();
  unload_kernel_16x256x32x4_warps4xstages5();
  unload_kernel_128x128x32x4_warps4xstages4();
  unload_kernel_32x128x32x8_warps4xstages5();
  unload_kernel_128x128x32x16_warps4xstages5();
  unload_kernel_32x128x32x8_warps4xstages4();
  unload_kernel_64x128x32x16_warps4xstages4();
  unload_kernel_16x128x64x16_warps4xstages5();
  unload_kernel_64x64x64x16_warps2xstages4();
  unload_kernel_32x256x64x4_warps4xstages5();
  unload_kernel_16x128x32x16_warps4xstages5();
  unload_kernel_16x256x64x16_warps4xstages4();
  unload_kernel_64x64x64x8_warps2xstages5();
  unload_kernel_64x64x32x16_warps2xstages5();
  unload_kernel_64x256x32x4_warps4xstages4();
  unload_kernel_128x256x32x16_warps4xstages4();
  unload_kernel_64x64x64x4_warps2xstages4();
  unload_kernel_128x256x64x4_warps4xstages4();
  unload_kernel_16x128x64x4_warps4xstages4();
  unload_kernel_32x128x64x4_warps4xstages4();
  unload_kernel_64x64x32x16_warps2xstages4();
  unload_kernel_64x128x32x4_warps4xstages4();
  unload_kernel_64x128x64x16_warps4xstages5();
  unload_kernel_64x256x64x8_warps4xstages5();
  unload_kernel_128x64x64x8_warps2xstages5();
  unload_kernel_16x128x32x4_warps4xstages5();
  unload_kernel_64x128x32x8_warps4xstages5();
  unload_kernel_64x256x32x16_warps4xstages4();
  unload_kernel_64x256x64x8_warps4xstages4();
  unload_kernel_16x256x64x4_warps4xstages5();
  unload_kernel_128x64x32x16_warps2xstages4();
  unload_kernel_32x256x32x4_warps4xstages5();
  unload_kernel_32x128x32x16_warps4xstages4();
  unload_kernel_128x128x32x4_warps4xstages5();
  unload_kernel_128x64x64x4_warps2xstages5();
  unload_kernel_32x64x64x4_warps2xstages5();
  unload_kernel_32x64x32x4_warps2xstages4();
  unload_kernel_32x64x32x8_warps2xstages5();
  unload_kernel_128x128x64x8_warps4xstages4();
  unload_kernel_32x256x64x8_warps4xstages4();
  unload_kernel_64x256x64x16_warps4xstages5();
  unload_kernel_16x256x32x16_warps4xstages4();
  unload_kernel_32x128x32x4_warps4xstages4();
  unload_kernel_128x256x32x8_warps4xstages4();
  unload_kernel_32x256x32x8_warps4xstages4();
  unload_kernel_64x256x64x4_warps4xstages5();
  unload_kernel_64x256x64x16_warps4xstages4();
  unload_kernel_64x256x32x8_warps4xstages4();
  unload_kernel_128x64x32x8_warps2xstages4();
  unload_kernel_32x64x64x16_warps2xstages5();
  unload_kernel_64x64x32x4_warps2xstages5();
  unload_kernel_16x128x32x4_warps4xstages4();
  unload_kernel_32x64x32x4_warps2xstages5();
  unload_kernel_128x64x32x8_warps2xstages5();
  unload_kernel_32x64x64x16_warps2xstages4();
  unload_kernel_64x256x32x16_warps4xstages5();
  unload_kernel_32x128x64x16_warps4xstages4();
  unload_kernel_32x256x32x16_warps4xstages4();
  unload_kernel_32x64x32x16_warps2xstages5();
  unload_kernel_16x64x32x8_warps2xstages5();
  unload_kernel_16x64x32x8_warps2xstages4();
  unload_kernel_128x256x64x8_warps4xstages4();
  unload_kernel_16x256x64x8_warps4xstages4();
  unload_kernel_16x64x64x8_warps2xstages5();
  unload_kernel_64x128x64x16_warps4xstages4();
  unload_kernel_16x128x32x8_warps4xstages4();
  unload_kernel_32x256x32x8_warps4xstages5();
  unload_kernel_32x128x64x8_warps4xstages4();
  unload_kernel_128x128x32x8_warps4xstages5();
  unload_kernel_32x128x64x4_warps4xstages5();
  unload_kernel_128x256x64x16_warps4xstages4();
  unload_kernel_32x64x64x4_warps2xstages4();
  unload_kernel_64x256x32x4_warps4xstages5();
  unload_kernel_16x64x32x4_warps2xstages4();
}


CUresult kernel_default(CUstream stream, CUdeviceptr a_ptr, CUdeviceptr b_ptr, CUdeviceptr c_ptr, int32_t M, int32_t N, int32_t K, int32_t stride_am, int32_t stride_ak, int32_t stride_bk, int32_t stride_bn, int32_t stride_cm, int32_t stride_cn){
  return kernel(stream, a_ptr, b_ptr, c_ptr, M, N, K, stride_am, stride_ak, stride_bk, stride_bn, stride_cm, stride_cn, 0);
}
