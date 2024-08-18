#include <stdio.h>
#include<string.h>

// 南师大30讲中实现方法
int mystrcmp(const char *str1, const char *str2){
    while(*str1 && *str2 && (*str1 == *str2)){
        *str1++;
        *str2++; 
    }
    return *str1 - *str2;
}

int Strcmp(char* str1, char* str2)//strcmp函数具体实现。
{
    while ((*str1 != '\0') && (*str1 == *str2))//判断字符串是否结束。
    {
        str1++;
        str2++;//
    }
    int t;
    t = *str1 - *str2;//比较对应字符大小。
    if (t == 0)
        printf("same string\n");
    else if (t > 0)
        printf("str1 is bigger\n");
    else
        printf("str2 is bigger\n");
    return t;
}

int main()
{
    char str1[256], str2[256];//看需要定义数组大小。
    for (;;)
    {
        printf("str1:");
        gets(str1);
        printf("str2:");
        gets(str2);
        Strcmp(str1, str2);
    }
    return 0;
}