#include<stdio.h>
int main(){
    int x;
    printf("Enter number");
    scanf("%d", &x);
    x%2 ==0 ? printf("Even number") : printf("Odd number");

    return 0;
}