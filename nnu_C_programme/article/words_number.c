#include <stdio.h>
#include <string>
#include <stdlib.h>

typedef struct
{
    char str[100];
    int count;
}Word;

Word A[1000];

// 检测是不是字符的函数
int check(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int i;
    int k;
    char ss[100];
    printf("Type a text('*' end)>>>\nStr=");
    
    for(i = 0; i < 500;)
    {
        int j = 0;
        scanf("%s", ss);

        // 末尾不为字母的置为\0
        while(ss[j] != '\0')
        {
            j++;
        }

        /*
        前面while循环是检测还没到底，那就一直往下，使j不断加一
        检查 j-1位的字符是不是字母
        */
        // check(ss)第j-1
        if(check(ss[j - 1]))
        {
            ss[j - 1] = '\0';
        }
        // 输入 0 结束循环
        if(ss[0] == '0')
        {
            break;
        }

        // 检查重复的单词
        for(k = 0; k < i; k++)
        {
            // strcmp(str1, str2)
            // str1 所指向的字符串和 str2 所指向的字符串进行比较
            if(!strcmp(ss, A[k].str))
            {
                // if循环里表示两个字符串不相等那就计数加一，退出循环
                A[k].count++;
                break;
            }
        }

        if(k == i)
        {
            strcpy(A[i].str, ss);
            A[i].count++;
            i++;
        }
    }

    for(int j = 0; j < i; j++)
    {
        // 输出单词
        printf("%s    %d\n", A[j].str, A[j].count);
    }

}


