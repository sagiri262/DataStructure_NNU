#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 定义一个二叉树
typedef struct Btnode
{
    /* data */
    int data;
    int *left;
    int *right;
}Btnode;


void preOrder(Btnode *node){
    if(node == NULL){
        return;
    }
    
    /* 先序遍历： 根 -> 左 -> 右 */
    printf("%d", node -> data);
    preOrder(node -> left);
    preOrder(node -> right);
}

// 中序遍历
/* 中序遍历顺序： 左 -> 根 -> 右 */
void inOrder(Btnode *root){
    if(root == NULL){
        return;
    }

    inOrder(root -> left);
    printf("%d", root -> data);
    inOrder(root -> right);
}





