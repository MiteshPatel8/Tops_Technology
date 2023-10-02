#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = n - 1; j > i; j--){
            printf("  ");
        }
        for(int m = 0; m < 2*i + 1; m++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}