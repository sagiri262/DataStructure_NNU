#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>


char* strcatttt(char *strDes, const char *strSrc){
    if(strDes == NULL || strSrc == NULL){
        // 两个字符串中有空的就不执行操作
        return NULL;
    }

    // 给p赋值strDes的值，表示
    char* p = strDes;

    // 不在字符终止位置，指针加一
    while(*p != '\0'){
        p++;
    }

    // 遍历strSrc字符串，依次添加连接
    while(strSrc != '\0'){
            *p = *strSrc;
        /* 操作逻辑：
            p的当前地址相当于strSrc开始位置的指针地址，
            然后从第一个开始遍历，先存进去字符，
            存入后得到新字符串p，
            p和strSrc的地址同时加一，进入下一个循环继续存放字符
            直到 strSrc != '\0' 也就是到字符串的结尾处*/
        p++;
        strSrc;
    }
    // 给p也加上终止符，表示连接完成
    *p = '\0';
    return p;
}

//
int main(){

	char arr1[1024] = "good";
	strcatttt(arr1, "job");				//这里直接调用函数,后置位直接写字符串即可
	printf("%s\n", arr1);		//输出
	system("pause");
	return 0;
}