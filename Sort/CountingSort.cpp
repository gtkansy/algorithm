//
// Created by gtkansy on 18-8-22.
//

//计数排序是一个非基于比较的排序算法,它的优势在于在对一定范围内的整数排序时，它的复杂度为Ο(n+k)（其中k是整数的范围），快于任何比较排序算法。 [1-2]  当然这是一种牺牲空间换取时间的做法，而且当O(k)>O(n*log(n))的时候其效率反而不如基于比较的排序
// （基于比较的排序的时间复杂度在理论上的下限是O(n*log(n)), 如归并排序，堆排序）
//就是计算有多少个比它小的比他大的



#include <iostream>
using namespace std;

// 分类 ------------ 内部非比较排序
// 数据结构 --------- 数组
// 最差时间复杂度 ---- O(n + k)
// 最优时间复杂度 ---- O(n + k)
// 平均时间复杂度 ---- O(n + k)
// 所需辅助空间 ------ O(n + k)
// 稳定性 ----------- 稳定

const int k = 100;   // 基数为100，排序[0,99]内的整数
int C[k];            // 计数数组


void CountingSort(int A[],int n){
    for(int i=0;i<k;i++)
        C[i]=0;
    for(int i=0;i<n;i++)
        C[A[i]]++;
    for(int i=1;i<k;i++)
        C[i]=C[i]+C[i-1];
    int *B=(int*)malloc((n)*sizeof(int));
    for(int i=n-1;i>=0;i--)
        B[--C[A[i]]]=A[i];
    for(int i=0;i<n;i++)
        A[i]=B[i];
    free(B);
}

int main(){
    int A[] = { 15, 22, 19, 46, 27, 73, 1, 19, 8 };  // 针对计数排序设计的输入，每一个元素都在[0,100]上且有重复元素
    int n = sizeof(A) / sizeof(int);
    CountingSort(A, n);
}