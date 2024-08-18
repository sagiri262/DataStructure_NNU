#include <stdio.h>

// 快速排序
/*在待排序序列中任意取一个元素作为基准元素，
按照该基准元素将待排序序列分为两个子序列，
左边子序列的值都小于基准值，
右边子序列的值都大于基准值。
然后把左右子序列当做一个子问题，
以同样的方法处理左右子序列，
直到所有的元素都排列在相对应的位置上为止。
快排是一个递归问题，
它是按照二叉递归树的前序路线去划分的。*/

// 使用递归实现快排
void quickSort(int *num, int left, int right){
    // 空的数组就不用排序了
    if(num == NULL){
        return;
    }
    // 递归出口
    if(left >= right){
        return;
    }
    
    int div = 
}


void partSort(int *num, int left, int right){
    
}

