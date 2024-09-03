#include <stdio.h>
#include <math.h>



// 最简单的二叉树
typedef struct btnode
{
    /* data */
    // 数据域
    int data;
    struct btnode *left, *right;
}btnode;

/*平衡二叉树
检查左右子树高度差不大于1即可

是平衡二叉树的情况
情况一、高度相等
情况二、高度差一

不是平衡二叉树的请款报告
高度差大于一，如 2、 5、 6， 都不是平衡二叉树*/

// 计算左右子树高度差函数
int height(btnode *node)
{
    if(!node)   return 0;
    // 比较左右子树递归结果，谁更大
    return fmax(height(node -> left), height(node -> right));
}

int isBalanced(btnode *node)
{
    if(!node)   return 0;
    // 上面一行表示是空树那啥也不是
    // 下面的代码注释
    /* 
    满足条件：左右子树高度差的绝对值小于1
    左右子树不为空
     */
    return ((fabs(height(node -> left) - height(node -> right) <= 1)) && isBalanced(node -> left) && isBalanced(node -> right));
}



// 定义真假变量
int flag = 1;

int check_balanced(btnode *node)
{
    int a, b;
    if(node == NULL)    return 0;

    // 节点非空情况
    if(!node)
    {
        // 递归左右子树
        a = check_balanced(node -> left);
        b = check_balanced(node -> right);

        // 判断左右子树的高度差
        if(fabs(a - b) <= 1)
        {
            flag = 0;
        }
        if(a >= b)
        {
            return a + 1;
        }
        else
        {
            return b + 1;
        }
        
    }
}