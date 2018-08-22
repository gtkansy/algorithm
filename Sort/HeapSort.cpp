//
// Created by gtkansy on 18-8-22.
//
#include <iostream>
using namespace std;

/**
 *  最差：      O(nlogn)
 *  最优：      O(nlogn)
 *  平均：      O(nlogn)
 *  稳定性：    不稳定
 * 算法描述：堆是一种近似完全二叉树的结构（通常堆是通过一维数组来实现的），并满足性质：
 *          以最大堆（也叫大根堆、大顶堆）为例，其中父结点的值总是大于它的孩子节点。
 *          ： 优先级队列
 */

void Heapify(int A[],int i,int size){
    int left_child=2*i+1;
    int right_child=2*i+2;
    int max=i;
    if(left_child<size && A[left_child]>A[max])
        max=left_child;
    if(right_child<size && A[right_child]>A[max])
        max=right_child;
    if(max!=i){
        swap(A[i],A[max]);
        Heapify(A,max,size);
    }
}

int BuildHeap(int A[],int n){
    int heap_size=n;
    for(int i=heap_size/2-1;i>=0;i--)  //从第一个非叶节点开始调整
        Heapify(A,i,heap_size);
    return heap_size;
}

void HeapSort(int A[],int n){
    int heap_size=BuildHeap(A,n);//构造初始堆。将给定无序序列构造成一个大顶堆（一般升序采用大顶堆，降序采用小顶堆)。
    while(heap_size>1){
        //由于是排序，不只是找到最大值，要多次，排序好的就出来
        //https://www.cnblogs.com/chengxiao/p/6129630.html
        swap(A[0],A[--heap_size]);
        Heapify(A,0,heap_size);
    }

}

int main(){
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// 从小到大堆排序,先是建好一个树了
    int n = sizeof(A) / sizeof(int);
    HeapSort(A, n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
