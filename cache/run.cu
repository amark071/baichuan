#include <cuda.h>
#include <cuda_runtime.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

const int kCudaThreadsNum = 512;
inline int CudaGetBlocks(const int N)
{
	return (N + kCudaThreadsNum - 1) / kCudaThreadsNum;
}
#define CUDA_KERNEL_LOOP(i, n) for (int i = blockIdx.x * blockDim.x + threadIdx.x; i < (n);  i += blockDim.x * gridDim.x)
__global__ void relu_gpu(float* in, float* out, int n)
{
	CUDA_KERNEL_LOOP(i, n) {
		out[i] = in[i] > 0 ? in[i] : 0;
	}
}
__global__ void relu_gpu_back(float* in, float* out, int n)
{
	CUDA_KERNEL_LOOP(i, n) {
		out[i] = in[i] > 0 ? 1 : 0;
	}
}
__global__ void sigmoid_gpu  (float* in, float* out, int n)
{
	CUDA_KERNEL_LOOP(i, n) {
		out[i] = 1 / (1 + exp(-in[i]));
	}
}
__global__ void sigmoid_gpu_back(float* in, float* out, int n)
{
	CUDA_KERNEL_LOOP(i, n) {
		out[i] = (1 / (1 + exp(-in[i]))) * (1 - 1 / (1 + exp(-in[i])));
	}
}
void print_array(std::vector<float> arr, int num, const char* name)
{
	printf("\n\n%s:\n", name);
	for (int i = 0; i < num; i++)
	{
		if (i % 8 == 0)
		{
			printf("\n");
		}
		printf("%.2f ", arr[i]);
	}
	printf("\n");
}
class Tensor
{
public:
	std::vector<float> shape;
	float* data;
	bool ongpu;
	std::vector<float> getshape()
	{
		return shape;
	}

	Tensor::Tensor(std::vector<float> vec, bool gpu)
	{
		int s = vec.size();
		shape = vec;
		ongpu = gpu;
		if (ongpu)
		{
			cudaMalloc(&data, sizeof(float) * s);
		}
		else
		{
			data = new float[s];
		}
	}
	void freecuda()
	{
		if (ongpu) cudaFree(data);
		else free(data);
	}

	Tensor cpu()
	{
		int s = this->shape.size();
		std::vector<float> cpu_tensor;
		cpu_tensor = shape;
		cudaMemcpy(cpu_tensor.data(), this->data, s * sizeof(float), cudaMemcpyDeviceToHost);
		Tensor temp(cpu_tensor, false);
		return temp;
	}
	Tensor gpu()
	{
		int s = this->shape.size();
		std::vector<float> gpu_tensor;
		gpu_tensor = shape;
		cudaMemcpy(gpu_tensor.data(), this->data, s * sizeof(float), cudaMemcpyHostToDevice);
		Tensor temp(gpu_tensor, true);
		return temp;
	}
};
int main()
{
	//在CPU上输入一个N个元素的数组
	const int N = 64;
	std::vector<float> h_in;
	h_in.reserve(N);
	for (int i = 0; i < N; i++)
	{
		h_in.push_back((i - 32) * 0.1);
	}
	Tensor hh_in(h_in, false);
	float* hin = (float*)malloc(N * sizeof(float));
	float* hout = (float*)malloc(N * sizeof(float));
	for (int i = 0; i < N; i++)
	{
		hin[i] = h_in[i];
	}
	print_array(h_in, N, "the data input on cpu");

	Tensor dd_in = hh_in.gpu();
	float* din;
	float* dout;
	cudaMalloc(&din, N * sizeof(float));
	cudaMalloc(&dout, N * sizeof(float));
	cudaMemcpy(din, hin, N * sizeof(float), cudaMemcpyHostToDevice);
	//relu_gpu << <1, N >> > (din, dout, N);
	//relu_gpu_back << <1, N >> > (din, dout, N);
	//sigmoid_gpu << <1, N >> > (din, dout, N);
	sigmoid_gpu_back << <1, N >> > (din, dout, N);

	std::vector<float> h_out;
	h_out.resize(N);
	cudaMemcpy(h_out.data(), dout, N * sizeof(float), cudaMemcpyDeviceToHost);
	print_array(h_out, N, "the data output on cpu");
	dd_in.freecuda();
	hh_in.freecuda();

	return 0;
}
