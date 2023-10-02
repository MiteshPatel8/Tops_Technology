#include<stdio.h>
int main(){
    char letter = 'a';
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}