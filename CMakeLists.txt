cmake_minimum_required(VERSION 3.6)
project(MATHURAN_PRIMER)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -Wpedantic")

set(SOURCE_FILES main.cpp)
add_executable(MATHURAN_PRIMER ${SOURCE_FILES})