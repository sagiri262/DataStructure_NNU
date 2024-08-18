#include <stdio.h>
#include <stdlib.h>

/* 循环列表解决约瑟夫环问题 */
//定义链表
typedef struct LinkNode
{
	/* data */
	int data;
	struct ListNode *pnext;
}LinkNode;


// 时间复杂度O(n)
int circle(int n, int m) {
	int p = 0;
	for (int i = 2; i <= n; i++) {
		p = (p + m) % n;
	}
	return p + 1;
}

// 上一个circle函数可以用一行结束
int f(int n, int m){
    return n == 1 ? n : (f(n - 1, m) + m - 1) % n + 1;
}

int main() {
	int joseph[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	printf("No. %d win the game! \n", f(11, 3));
	return 0;
}