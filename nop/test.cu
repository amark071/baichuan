   #include <cuda_runtime.h>
   #include <cuda.h>                                                                                                                                                           
   #include <stdio.h>
   extern "C" void cu(int* output, int input);
   
int main() {
    int input = 5;
    int* output;
    int* d_output;
        cudaMalloc(&d_output, sizeof(int) * 16);
        output = (int*)malloc(sizeof(int) * 16);
        void* args[] = { &d_output, &input };
        CUfunction function;
        CUmodule module;
        cuModuleLoad(&module, "cu.cubin");
        cuModuleGetFunction(&function, module, "_Z12simpleKernelPii");
        cuLaunchKernel(function, 32, 1, 1, 32, 1, 1, 16384, 0, args, 0);
        cudaMemcpy(output, d_output, sizeof(int) * 16, cudaMemcpyDeviceToHost);
        for (int i = 0; i < 16; i++) {
          printf("output[%d] = %d\n", i, output[i]);
        }
        free(output);
        cudaFree(d_output);
        cuModuleUnload(module);
    return 0;
  }