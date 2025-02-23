cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(awesome)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# 添加 include 目录
include_directories(include)

# 添加源文件
add_executable(awesome src/main.cpp src/nat_gateway.cpp src/client.cpp)

# 如果你使用了外部库，还可以添加链接命令
# target_link_libraries(MyProject some_external_library)
