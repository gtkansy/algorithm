//
// Created by gtkansy on 18-8-22.
//

#include <iostream>
using namespace std;

/**
 * 最差：   每次选取的基准都是最大（或最小）的元素，导致每次只划分出了一个分区，需要进行n-1次划分才能结束递归，时间复杂度为O(n^2)
 * 最优：   每次选取的基准都是中位数，这样每次都均匀的划分出两个分区，只需要logn次划分就能结束递归，时间复杂度为O(nlogn)
 * 平均：   O(nlogn)
 * 辅助空间  主要是递归造成的栈空间的使用(用来保存left和right等局部变量)，取决于递归树的深度，一般为O(logn)，最差为O(n)
 *  稳定性    不稳定
 * 算法描述： 就是选一个基准，每次把这个基准放到指定的位置
 *          左右指针法和挖坑法只能针对顺序序列进行排序，如果是对一个链表进行排序， 就无用武之地了,用前后指针
 */

int PartSort(int* array,int left,int right)
{
    if(left < right){
        int key = array[right];
        int cur = left;
        int pre = cur - 1;
        while(cur < right)
        {
            while(array[cur] < key && ++pre != cur)//如果找到小于key的值，并且cur和pre之间有距离时。
            {
                swap(array[cur],array[pre]);
            }
            ++cur;
        }
        swap(array[++pre],array[right]);
        return pre;
    }
    return -1;
}

//前后指针    //基准在最右边
void QuickSort(int A[],int left,int right){
    if(left>=right)
        return;
    int pivot_index=PartSort(A,left,right);
    QuickSort(A,left,pivot_index-1);
    QuickSort(A,pivot_index+1,right);
}

//左右指针   http://developer.51cto.com/art/201403/430986.htm
void QuickSortleftandright(int A[],int left,int right){
    int i,j,temp;
    if(left>right)
        return;
    temp=A[right];   //基准在最右边
    i=left;
    j=right;
    while(i!=j){
        //顺序很重要，从左边开始查找
        while(i<j && A[i]<=temp)
            i++;
        while(i<j && A[j]>=temp)
            j--;
        swap(A[i],A[j]);
    }
    A[right]=A[i];
    A[i]=temp;
    QuickSortleftandright(A,left,i-1);
    QuickSortleftandright(A,i+1,right);
}

int main(){
    int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 }; // 从小到大快速排序
    int n = sizeof(A) / sizeof(int);
    QuickSort(A, 0, n - 1);
   // QuickSortleftandright(A, 0, n - 1);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}