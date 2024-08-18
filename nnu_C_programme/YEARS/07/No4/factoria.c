#include <stdio.h>

int factoriaFunc(int n){
    if(n < 0){
        return -1;
    }
    if(n == 0){
        return 1;
    }
    else{
        return n * factoriaFunc(n - 1);
    }
}

int main(){
    printf("%d", factoriaFunc(10));
    return 0;
}