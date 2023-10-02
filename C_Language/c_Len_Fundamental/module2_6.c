#include<stdio.h>

int main(){
    int year, days, month, remainigDays;
    printf("Enter a year : ");
    scanf("%d", &year);
    
    printf("Total days : %d", year*365);




    printf("Enter a days : ");
    scanf("%d", &days);
    year = days / 365;
    remainigDays = days % 365;
    month = remainigDays / 30;
    days = remainigDays % 30;
    printf("Years : %d, Month : %d, Day : %d", year, month, days);
    return 0;
}