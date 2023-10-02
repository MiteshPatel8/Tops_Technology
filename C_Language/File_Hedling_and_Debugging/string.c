#include<stdio.h>
int main(){
    char name[] =  "mitesh";
    int i = 0, len = 0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    printf("%d", len);

    return 0 ;
}