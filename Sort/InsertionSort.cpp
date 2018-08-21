//
// Created by gtkansy on 18-8-21.
//

#include <iostream>
using namespace std;

/**  普通插入
 *  数据结构： 数组
 *  最差：     最坏情况为输入序列是降序排列的,此时时间复杂度O(n^2)
 *  最优：     最好情况为输入序列是升序排列的,此时时间复杂度O(n)
 *  平均：     O(n^2)
 *  空间：      O(1)
 *  稳定性：    稳定
 *  算法描述： 类似于抓扑克牌，在已经排好序的序列中插入，然后把已排序的元素逐步向后挪
 */

//二分插入：最优时间复杂度 ---- O(nlogn)

/** 希尔排序
 *   最差时间：   根据步长序列的不同而不同。已知最好的为O(n(logn)^2)
 *   最优：      O(n)  选步长为1
 *   平均：      根据步长序列的不同而不同
 *   稳定性：    不稳定
 *  算法说明：针对插入排序每次只能将数据移动一位而改进，比如在末尾的元素可能用大步长就可以快速交换
 */

//普通插入查找
void InsertionSort(int A[],int n){
    for(int i=1;i<n;i++){
        int get=A[i];
        int j=i-1;
        while(j>=0 && A[j]>get){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=get;
    }
}

//如果比较操作的代价比交换操作大的话，可以采用二分插入法来减少比较操作的次数，我们称为二分插入排序
void InsertionSortDichotomy(int A[], int n){
    for(int i=1;i<n;i++){
        int get=A[i];
        int left=0;
        int right=i-1;
        while(left<right){
            int mid=(left+right)/2;
            if(A[mid]>get)
                right=mid-1;
            else
                left=mid+1;
        }
        for(int j=i-1;j>=left;j--){
            A[j+1]=A[j];
        }
        A[left]=get;
    }
}

void ShellSort(int A[],int n){
    int h=0;
    while(h<=n){
        h=3*h+1;   //生成初始增量
    }
    while(h>=1){
        for(int i=h;i<n;i++){
            int j=i-h;
            int get=A[i];
            while(j>=0 && A[j]>get){
                A[j+h]=A[j];
                j=j-h;
            }
            A[j+h]=get;
        }
        h=(h-1)/3;
    }
}

int main() {
    int A[] = {6, 5, 3, 1, 8, 7, 2, 4};// 从小到大插入排序
    int n = sizeof(A) / sizeof(int);
    InsertionSort(A, n);  //普通的插入排序
    InsertionSortDichotomy(A, n); //二分插入（不是二分查找）
    ShellSort(A, n);   //希尔排序
}