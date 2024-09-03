#include <stdio.h>
#include <stdlib.h>

// 最简单的二叉树
typedef struct btnode
{
    /* data */
    // 数据域
    int data;
    struct btnode *left, *right;
}btnode;


/*完全二叉树判定方法
采用层次遍历方法
将所有节点加入队列包括（空节点）
当遇到空节点查找其之后是否有非空节点——若有就不是完全二叉树
*/

int IsComplete(btnode *node)
{
    btnode *p, *Q;
    // 初始化队列
    InitQuene(Q);
    // 空树也是完全二叉树
    if(!node)   return 1;
    EnQuene(Q, node);

    while(!isEmpty(Q))
    {
        // 队列非空开始下面操作
        DeleteQuene(Q, p);
        if(p)
        {
            // 节点非空则左右节点入队
            EnQuene(Q, p -> left);
            EnQuene(Q, p -> right);
        }
        else
        {
            // 节点为空，检查其后是否有非空节点
            while(!isEmpty(Q))
            {
                DeleteQuene(Q, p);
                // 节点非空，二叉树不是完全二叉树，退出函数并返回0值
                if(p)   return 0;
            }
        }
    }
}