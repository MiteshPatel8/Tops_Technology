#include<stdio.h>
int main(){
    for(int i = 0; i < 5; i++){
        char letter = 'a';
        for(int j = 0; j <= i; j++){
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}