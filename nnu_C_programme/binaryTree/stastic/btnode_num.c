#include <stdio.h>


typedef struct btnode
{
    /* data */
    int data;
    struct btnode *left, *right;
}btnode;

int count_node(btnode *node)
{
    // a和b分别统计左右子树的节点数
    int a, b;
    if(node == NULL)
    {
        return 0;
    }
    // 递归实现
    else
    {
        a = count_node(node -> right);
        b = count_node(node -> left);
        // 节点数除了统计左右子树
        // 不要忘记根节点
        // 吃水不忘挖井人
        return a + b + 1;
    }
}




