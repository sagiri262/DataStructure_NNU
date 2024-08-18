#include <stdio.h>
#include <stdlib.h>

// 打印数组arr中的当前子集，从start索引开始
void printCurrentSubset(int *arr, int start, int n) {
    // arr表示数组
    // start表示开始位置，也就是子集开始的位置
    //
    for (int i = start; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 递归函数，用于生成并打印数组arr的所有子集
void generateSubsets(int *arr, int index,int n){
    // 打印已经生成的子集串
    if(index == n){
        printCurrentSubset(arr, 0, index);
        return;
    }
    // 不包含当前元素的子集
    generateSubsets(arr, n, index + 1);

    // 包含当前元素的子集
    arr[index] = n - index;
    generateSubsets(arr, n, index + 1);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // 动态分配数组
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // 初始化数组为0到n-1
    for (int i = 0; i < n; i++) {
        arr[i] = 0; // 这里初始化为0，实际可以是任何值
    }

    printf("All subsets of the array are:\n");
    generateSubsets(arr, n, 0);

    free(arr); // 释放分配的内存
    return 0;
}