#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter n1 : ");
    scanf("%d", &n1);
    printf("Enter n2 : ");
    scanf("%d", &n2);
    n1=n1-n2;
    n2=n1+n2;
    n1=n2-n1;
    printf("%d", n1);
    printf("%d", n2);
    return 0;
}