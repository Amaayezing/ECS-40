cmake_minimum_required(VERSION 3.9)
project(Packing)

set(CMAKE_CXX_STANDARD 14)

add_executable(Packing checkpack.cpp Domain.h Point.h Shape.h testPoint.cpp testShape.cpp Domain.cpp Point.cpp Shape.cpp)