#include<stdio.h>
int main(){
    int num = 1235465;
    int total = 0;
    while(num > 0){
        total += num % 10;
        num = num / 10; 
    }
    printf("%d", total);
    return 0;
}