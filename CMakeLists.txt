cmake_minimum_required(VERSION 3.12)
project(algorithm)

set(CMAKE_CXX_STANDARD 11)

add_executable(BubbleSort Sort/BubbleSort.cpp)
add_executable(SelectSort Sort/SelectSort.cpp)
add_executable(InsertionSort Sort/InsertionSort.cpp)
add_executable(MergeSort Sort/MergeSort.cpp)
add_executable(QuickSort Sort/QuickSort.cpp)
add_executable(HeapSort Sort/HeapSort.cpp)
add_executable(CountingSort Sort/CountingSort.cpp)
add_executable(RadixSort Sort/RadixSort.cpp)
add_executable(BucketSort Sort/BucketSort.cpp)

add_executable(Stack datastructure/Stack.cpp)
add_executable(Queue datastructure/Queue.cpp)


