#include<stdio.h>
int main(){
       double price, rate, years; 
    double interest;
    printf("Enter ammount : ");
    scanf("%lf", &price);
    printf("Enter interest rate : ");
    scanf("%lf", &rate);
    printf("Enter no of years : ");
    scanf("%lf", &years);

    interest = (price * rate * years)/100;
    printf("Interest is : %lf", interest);


    return 0;
}