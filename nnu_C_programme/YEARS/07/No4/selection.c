#include <stdio.h>

int main(){
    int a[] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int *p = a + 5;
    int *q = NULL;
    *q = *(p + 5);
    printf("%d, %d\n", *p, *q);
    return 0;
}

typedef struct ListNode
{
    /* data */
    int value;
    int *p_next;
}ListNode;


ListNode* reverseList(ListNode* pHead){
    // 链表为空，转置后还是自己本身
    if(pHead == NULL || pHead -> p_next == NULL){
        return pHead;
    }

    
}