#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MaxSize 10

int maxComStr(char *s1, char *s2, int *posi, int *posj){
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    // 较短的子串由s1保管
    if(len1 > len2){
        swap(s1, s2);
    }

    int maxLen = 0;
    int dp[][MaxSize] = {0};
    for(int i = 1; i <= len1; i++){
        for(int j = 1; j <= len2; j++){
            if(s1[i - 1] == s2[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if(dp[i][j] > maxLen){
                    maxLen = dp[i][j];
                    // 记录最长公共子串在s1中的起始位置
                    posi = i - maxLen;
                    // 记录最长公共子串在s2中的起始位置
                    posj = j - maxLen;
                }
            }
        }
    }

}