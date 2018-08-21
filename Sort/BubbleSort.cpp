#include <iostream>
using namespace std;

/**  普通冒泡
 *  数据结构：          数组
 *  最差时间复杂度：     O(n^2)
 *  最优时间复杂度：     O(n)
 *  平均时间复杂度：     O(n^2)
 *  所需辅助空间：       O(1)
 *  稳定性：            稳定 (判断稳定用相同的数看位置是否变化)
 *  就是每一步确定一个位置，冒泡：两两比较把最大值（或者最小值）放到指定位置
 */


void Swap(int &a,int &b){
    //如果不是用数组地址的话，注意是引用
    int temp;
    temp=b;
    b=a;
    a=temp;
}

void BubbleSort(int A[],int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(A[j]>A[j+1])
                Swap(A[j],A[j+1]);
        }
    }
}
//情况与上面一样（复杂度）
void CocktailSort(int A[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        for(int i=left;i<right;i++){
            if(A[i]>A[i+1])
                Swap(A[i],A[i+1]);
        }
        right--;
        for(int j=right;j>left;j--){
            //注意这里的left
            if(A[j]<A[j-1])
                Swap(A[j],A[j-1]);
        }
        left++;
    }
}

int main(){
    int A[]={6,5,3,1,8,7,2,4};
    int n= sizeof(A)/sizeof(int);
    BubbleSort(A,n);  //原始的冒泡排序
    CocktailSort(A,n); //改进的鸡尾酒排序，就是先是从低到高再从高到低
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}