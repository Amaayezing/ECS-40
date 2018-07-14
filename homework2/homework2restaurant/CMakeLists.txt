cmake_minimum_required(VERSION 3.9)
project(homework2restaurant)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework2restaurant assigntables.cpp Restaurant.h Table.h Restaurant.cpp Table.cpp)