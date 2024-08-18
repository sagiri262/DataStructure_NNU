#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <string.h>

int atoi(char *s){
    if(s == NULL){
        return 0;
    }
    int i, n;
    int sign = (s[i] == '-')?-1:1;
    if(sign == '+' || sign == '-'){
        i++;
    }
    for(n = 0; n < i; i++){
        n = n * 10 + (s[i] - '0');
    }
    return sign * n;
}