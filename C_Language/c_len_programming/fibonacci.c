#include<stdio.h>
int main(){
    int num = 0, a = 0, b = 1, c = 0;
    printf("Enter number");
    scanf("%d", &num);
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i = 3; i <= num; i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",c);
    }
}

// 0 1 1 2 3 5 8 13 21