//
// Created by gtkansy on 18-8-21.
//

#include <iostream>
using namespace std;

/**
 * 归并排序： 可以由递归和非递归实现   两个两个到两组两组
 * 归并排序的实现分为递归实现与非递归(迭代)实现。递归实现的归并排序是算法设计中分治策略的典型应用，我们将一个大问题分割成小问题分别解决，然后用所有小问题的答案来解决整个大问题。
 * 非递归(迭代)实现的归并排序首先进行是两两归并，然后四四归并，然后是八八归并，一直下去直到归并了整个数组。
 * 最差：      O(nlogn)
 * 最优：      O(nlogn)
 * 平均：      O(nlogn)
 * 辅助空间：   O(n)
 * 稳定性：    稳定
 */

void Merge(int A[],int left,int mid,int right){
   // 合并两个已排好序的数组A[left...mid]和A[mid+1...right]
    int len=right-left+1;
    int *temp=new int[len];
    int index=0;
    int i=left;
    int j=mid+1;
    while(i<=mid && j<=right){
        temp[index++]=A[i]<=A[j]?A[i++]:A[j++];  // 带等号保证归并排序的稳定性
    }
    while(i<=mid){
        temp[index++] = A[i++];
    }
    while(j<=right){
        temp[index++] = A[j++];
    }
    for(int k=0;k<len;k++){
        A[left++]=temp[k];
    }
}

//注意递归的实现 （自顶向下）
void MergeSortRecursion(int A[],int left,int right){
    if(left==right)
        return;
    int mid=(left+right)/2;
    MergeSortRecursion(A,left,mid);
    MergeSortRecursion(A, mid + 1, right);
    Merge(A,left,mid,right);
}

//非递归实现  自底向上
void MergeSortIteration(int A[], int len)    // 非递归(迭代)实现的归并排序(自底向上)
{
    int left, mid, right;// 子数组索引,前一个为A[left...mid]，后一个子数组为A[mid+1...right]
    for (int i = 1; i < len; i *= 2)        // 子数组的大小i初始为1，每轮翻倍
    {
        left = 0;
        while (left + i < len)              // 后一个子数组存在(需要归并)
        {
            mid = left + i - 1;
            right = mid + i < len ? mid + i : len - 1;// 后一个子数组大小可能不够
            Merge(A, left, mid, right);
            left = right + 1;               // 前一个子数组索引向后移动
        }
    }
}

int main(){
    int A1[] = { 6, 5, 3, 1, 8, 7, 2, 4 };      // 从小到大归并排序
    int A2[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
    int n1 = sizeof(A1) / sizeof(int);
    int n2 = sizeof(A2) / sizeof(int);
    //两种形式
    //int* A3=new int[8];
    //int A4[8];
    MergeSortRecursion(A1, 0, n1 - 1);          // 递归实现
    MergeSortIteration(A2, n2);                 // 非递归实现

}