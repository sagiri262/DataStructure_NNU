#include <stdio.h>

/*双分支节点判定情况和单分支节点差不多*/

typedef struct btnode
{
    /* data */
    int data;
    struct btnode *left, *right;
}btnode;

int count_double(btnode *node)
{
    // a和b分别统计左右子树的节点数
    int a, b;
    if(node == NULL)
    {
        return 0;
    }

    if(node -> left != NULL && node -> right != NULL)
    {
        a = count_double(node -> left);
        b = count_double(node -> right);
        return a + b + 1;
    }
    else
    {
        a = count_double(node -> left);
        b = count_double(node -> right);
        return a + b;
    }
}
