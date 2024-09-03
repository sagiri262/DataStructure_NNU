#include <stdio.h>


typedef struct btnode
{
    /* data */
    int data;
    struct btnode *left, *right;
}btnode;

int count_single(btnode *node)
{
    // a和b分别统计左右子树的节点数
    int a, b;
    if(node == NULL)
    {
        return 0;
    }
    // 单节点情况包括：左为空  或  右为空

    if((node -> left == NULL && node -> right != NULL) || (node -> left != NULL && node -> right == NULL))
    {
        a = count_single(node -> left);
        b = count_single(node -> right);
        return a + b + 1;
    }
    else
    {
        a = count_single(node -> left);
        b = count_single(node -> right);
        return a + b;
    }
}
