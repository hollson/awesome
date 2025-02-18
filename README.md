# cxxopts 使用示例

这是一个简单的 C++ 项目，演示了如何使用 [`cxxopts`](https://github.com/jarro2783/cxxopts) 库来解析命令行参数。



<br/>



## 构建项目

```bash
mkdir build
cd build
cmake ..
make -j6
```



<br/>



## 运行效果

```bash
$ ./cxxopts_example
An awesome example program

Usage:
  ./cxxopts_example [OPTION...]

  -h, --help        Show help
  -v, --verbose     Enable verbose output
  -o, --output arg  Set output file
  -n, --number arg  Number of items
```

