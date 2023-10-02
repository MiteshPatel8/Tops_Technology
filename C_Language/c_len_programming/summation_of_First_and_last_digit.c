#include<stdio.h>
int main(){
    int num = 123456;
    int summation = 0;
    summation = (num % 10);
    while(num >= 10){
       
       num = num / 10 ;
    } 
    summation += num ;
    printf("%d", summation);
    return 0;
}