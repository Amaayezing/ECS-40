cmake_minimum_required(VERSION 3.9)
project(homework2aircraft)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework2aircraft maintenance.cpp testAircraft.cpp Aircraft.h Aircraft.cpp)