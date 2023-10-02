#include<stdio.h>
int main(){
    int num = 0, reverse = 0, num2 = 0;
    printf("Enter number");
    scanf("%d", &num);
    
    while( num > 0){
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    printf("%d", reverse);

    return 0;
}