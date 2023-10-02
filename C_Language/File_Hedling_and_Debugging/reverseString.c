#include<stdio.h>
#include<string.h>


void reverseString(char* s, char* result, int index, int length){
    if(index == length)
        return;

    result[length - (index+1)] = s[index];
    reverseString(s, result, +index1, length);
}

int main(){

    char s[] = "Viraj";
    int length = strlen(s);
    printf("%d\n", length);

    char result[length];
    reverseString(s, result, 0, strlen(s));
    printf("%s", result);
    return 0;
}