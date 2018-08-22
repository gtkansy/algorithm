cmake_minimum_required(VERSION 3.12)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(BubbleSort Sort/BubbleSort.cpp)
add_executable(SelectSort Sort/SelectSort.cpp)
add_executable(InsertionSort Sort/InsertionSort.cpp)
add_executable(MergeSort Sort/MergeSort.cpp)
add_executable(QuickSort Sort/QuickSort.cpp)
add_executable(HeapSort Sort/HeapSort.cpp)


