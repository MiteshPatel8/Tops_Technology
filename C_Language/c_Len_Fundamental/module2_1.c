#include<stdio.h>
int main(){
    char name[100], address[100];
    float birthdate,age;
    printf("enter your name");
    scanf("%s",&name);
    printf("%s\n",name);
    printf("enter your birthdate");
    scanf("%f",&birthdate);
    printf("%f\n",birthdate);
    printf("enter your age");
    scanf("%f",&age);
    printf("%f\n",age);
    printf("enter your address");
    scanf("%s",&address);
    printf("%s\n",address);
    
    return 0;
}