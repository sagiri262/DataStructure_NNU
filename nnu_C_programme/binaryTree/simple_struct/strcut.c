#include <stdio.h>

// 最简单的二叉树
typedef struct btnode
{
    /* data */
    // 数据域
    int data;
    struct btnode *left, *right;
}btnode;

// Haffman哈夫曼树
typedef struct Haffman
{
    /* data */
    // 父亲编号
    int parent;
    int lchild;     // 左孩子编号
    int rchild;     // 右孩子编号
    int weight;     // 权重值
};



