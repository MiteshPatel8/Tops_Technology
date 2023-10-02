#include <stdio.h>

int main() {
    char name[] = "mam";
    int len = sizeof(name) / sizeof(name[0]) - 1;
    char res[len + 1];
    
    for (int i = 0; i < len; i++) {
        res[i] = name[len - i - 1];
    }
    res[len] = '\0';
    printf("%s\n", res);
    int match = 0;
    for(int j = 0; j < len; j++){
        if(name[j] == res[j]){
            match = 1;
        }
    }
    if(match ==1){
        printf("strings are pallindrom");
    }
    else{
        printf("strings are not pallindrom");

    }
    return 0;
}
