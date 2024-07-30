#include <cuda_runtime.h>
#include <iostream>

int main() {
    cudaDeviceProp prop;
    cudaError_t err = cudaGetDeviceProperties(&prop, 0);

     if (err != cudaSuccess) {
         // 打印错误信息
         std::cerr << "Error getting device properties: " << cudaGetErrorString(err) << std::endl;
         return -1;
    }

     // 输出每个线程块的最大共享内存大小
    std::cout << "Maximum shared memory per block: " << prop.sharedMemPerBlock << " bytes" << std::endl;


    // 输出每个线程块的最大维度
    std::cout << "Maximum block dimensions:" << std::endl;
    std::cout << "  x: " << prop.maxThreadsDim[0] << std::endl;
    std::cout << "  y: " << prop.maxThreadsDim[1] << std::endl;
    std::cout << "  z: " << prop.maxThreadsDim[2] << std::endl;

    // 输出每个网格的最大维度
    std::cout << "Maximum grid dimensions:" << std::endl;
    std::cout << "  x: " << prop.maxGridSize[0] << std::endl;
    std::cout << "  y: " << prop.maxGridSize[1] << std::endl;
    std::cout << "  z: " << prop.maxGridSize[2] << std::endl;
    return 0;
}

