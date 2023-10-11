cmake_minimum_required(VERSION 3.25)
project(evm)

set(CMAKE_CXX_STANDARD 17)

add_executable(evm main.cpp z3.cpp z2.cpp z1.cpp)
