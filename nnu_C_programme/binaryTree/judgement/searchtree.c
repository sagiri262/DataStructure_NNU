#include <stdio.h>

// 最简单的二叉树
typedef struct btnode
{
    /* data */
    // 数据域
    int data;
    struct btnode *left, *right;
}btnode;

/*排序二叉树
中序遍历二叉树
如果节点值由小到大排列就是排序二叉树
否则不是
*/

/*
中序遍历：左 -> 根 -> 右
//中序遍历
void inorder(Node* node){
    if(node != NULL){
        inorder(node -> left);
        printf("%d", node -> data);
        inorder(node -> right);
    }
}
*/

// 定义全局变量prev和flag
// prev 表示
// flag 表示逻辑判断值
int prev = 0;
int flag = 1;

int INOrderTraverse(btnode *node)
{
    if(node != NULL)
    {
        INOrderTraverse(node -> left);
        if(node -> data < prev)
        {
            // 
            flag = 0;
        }
        prev = node -> data;
        INOrderTraverse(node -> right);
    }
}

// 更新后的排序二叉树判定程序
// 中序遍历函数，用于判断二叉树是否是排序二叉树
int INOrderTraverser(btnode *node) {
    if (node != NULL) {
        // 首先遍历左子树
        INOrderTraverser(node->left);
        
        // 检查当前节点的值是否大于前一个访问的节点值
        if (node->data < prev) {
            // 如果不是，说明不是排序二叉树，设置标志位为0
            flag = 0;
        }
        
        // 更新前一个访问的节点值为当前节点的值
        prev = node->data;
        
        // 然后遍历右子树
        INOrderTraverser(node->right);
    }
    // 返回标志位，表示是否是排序二叉树
    return flag;
}


// 测试用例
int main() {
    // 创建和初始化二叉树
    // 这里应该添加代码来创建和初始化二叉树
    // ...

    // 假设root是二叉树的根节点
    btnode *root = NULL;

    // 调用中序遍历函数，并获取结果
    int result = INOrderTraverse(root);

    // 打印结果
    if (result == 1) {
        printf("The binary tree is a sorted binary tree.\n");
    } else {
        printf("The binary tree is not a sorted binary tree.\n");
    }

    return 0;
}