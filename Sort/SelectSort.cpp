//
// Created by gtkansy on 18-8-21.
//

#include <iostream>
using namespace std;

/**
 * 数据结构：     数组
 * 最差时间复杂度：    O(n^2)
 * 最差时间复杂度：    O(n^2)
 * 最差时间复杂度：    O(n^2)
 * 辅助空间：    O(1)
 * 稳定性：  选择排序是不稳定的排序算法，不稳定发生在最小元素与A[i]交换的时刻。
            比如序列：{ 5, 8, 5, 2, 9 }，一次选择的最小元素是2，然后把2和第一个5进行交换，从而改变了两个元素5的相对次序。
 * 就是找到序列中的最小元素放到起始位置，不断找小的元素放入
 * 与冒泡的区别：冒泡排序通过依次交换相邻两个顺序不合法的元素位置，从而将当前最小（大）元素放到合适的位置；
 *              选择排序是每遍历一次都记住了当前最小（大）元素的位置，最后仅需一次交换操作即可将其放到合适的位置。
 */

//每一趟i中，在剩下的n-i个元素中找到最小的值的index，最后再交换
void SelectionSort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[min_index])
                min_index=j;  //在这里不能直接交换数组的值
        }
        if(min_index!=i)
            swap(A[i],A[min_index]);
    }
}


int main(){
    int A[]={8,5,2,6,9,3,1,4,0,7};
    int n=sizeof(A)/sizeof(int);
    SelectionSort(A,n);
}