#include <stdio.h>


typedef struct btnode
{
    /* data */
    int data;
    struct btnode *left, *right;
}btnode;

int count_leaves(btnode *node)
{
    // a和b分别统计左右子树的节点数
    int a, b;
    if(node == NULL)
    {
        return 0;
    }


    // 遇到左右子树均为空
    else if(node -> left == NULL && node -> right == NULL)
    {
        // 这种情况只剩下一个根节点
        return 1;
    }

    // 递归实现
    else
    {
        a = count_leaves(node -> right);
        b = count_leaves(node -> left);
        return a + b;
    }
}
