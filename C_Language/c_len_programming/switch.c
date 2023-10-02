#include<stdio.h>
int main(){
    char day;
    printf("Choos a day: ");
    scanf("%c",&day);
    printf("m for monday : \n t for tuesday :\n w for wednesday :\n  th for thusday :\n  f for friday :\n  sa for saturday :\n s for sunday :\n ");

    switch(day){
        case 'm':printf("monday");
                break;
        case 't':printf("tuesday");
                break;
        case 'w':printf("wednesday");
                break;
        case 'th':printf("thusday");
                break;
        case 'f':printf("friday");
                break;
        case 'sa':printf("saturday");
                break;
        case 's':printf("sunday");
                break;
    }


    return 0;
}
