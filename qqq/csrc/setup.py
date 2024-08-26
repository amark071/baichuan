from setuptools import setup, find_packages
from torch.utils import cpp_extension

setup(
    name='qqq_gemm',
    ext_modules=[
        cpp_extension.CUDAExtension(
            name='qqq_gemm',
            sources=[
                'pybind.cpp',
                'qqq_gemm.cu'
            ],
        ),
    ],
    cmdclass={
        'build_ext': cpp_extension.BuildExtension.with_options(use_ninja=False)
    },
    packages=find_packages(
        exclude=['notebook', 'scripts', 'tests']),
)