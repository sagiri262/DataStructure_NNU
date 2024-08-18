#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int top;
    int capacity;
    int *array
}Stack;
 
// 初始化栈
void initStack(Stack *stack, int capacity){
    stack -> top = -1;
    stack -> capacity = capacity;
    stack -> array = (int *)malloc(sizeof(int) *capacity);
}

// 检查栈是否为空
int isEmpty(Stack *stack){
    return stack -> top == -1;
}

// 元素入栈
int push(Stack *stack, int data){
    if(stack -> top < stack -> capacity - 1){
        stack -> array[++stack -> top] = data; 
    }
}

// 元素出栈
int pop(Stack * stack){
    if(!isEmpty(stack)){
        stack -> array[stack -> top--];
    }
    // 栈为空
    return -1;
}

// 构造二分查找函数
int binarySearchRecursive(int *arr, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        // 将mid入栈
        Stack stack;
        initStack(&stack, high - low + 1);
        push(&stack, mid);

        while (!isEmpty(&stack)) {
            int current = pop(&stack);

            if (arr[current] == target) {
                free(stack.array);
                return current;
            }

            if (arr[current] > target) {
                push(&stack, current - 1);
                high = current - 1;
            } else {
                push(&stack, current + 1);
                low = current + 1;
            }
        }

        free(stack.array);
        return -1; // 未找到目标
    }
    return -1; // 未找到目标
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int m = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target to search: ");
    scanf("%d", &target);

    int result = binarySearchRecursive(arr, 0, m - 1, target);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}