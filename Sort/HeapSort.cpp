//
// Created by gtkansy on 18-8-22.
//
#include <iostream>
using namespace std;

/**
 *
 * 算法描述：堆是一种近似完全二叉树的结构（通常堆是通过一维数组来实现的），并满足性质：
 *          以最大堆（也叫大根堆、大顶堆）为例，其中父结点的值总是大于它的孩子节点。
 */

void Heapify(int A[],int i,int size){
    int left_child=2*i+1;
    int right_child=2*i+2;
    int max=i;
    if(left_child<size)
}

int BuildHeap(int A[],int n){
    int heap_size=n;
    for(int i=heap_size/2-1;i>=0;i--)
        Heapify(A,i,heap_size);
    return heap_size;
}

void HeapSort(int A[],int n){
    int heap_size=BuildHeap(A,n);//构造初始堆。将给定无序序列构造成一个大顶堆（一般升序采用大顶堆，降序采用小顶堆)。


}

int main(){
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// 从小到大堆排序
    int n = sizeof(A) / sizeof(int);
    HeapSort(A, n);
}
