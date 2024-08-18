#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int w[5] = {0, 2, 3, 4, 5};
    int v[5] = {0, 3, 4, 5, 6};
    int capacity = 8;
    int dp[5][9] = {{0}};
    
    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= capacity; j++){
            if(j < w[i]){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = fmax(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 9; j++){
            printf(" %d ", dp[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}