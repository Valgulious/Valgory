cmake_minimum_required(VERSION 3.8)
project(QuickSort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Qsort.h Qsort.cpp tests.cpp)
add_executable(QuickSort ${SOURCE_FILES})