#include<stdio.h>


int main(){
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    int  number= 0;
    int no1 = 0;
    int no2 = 0;
        printf("Enter number\n");
        scanf("%d",&number);
        
        switch(number){
            case 1 :{
                printf("Enter  value no. one values:\n");
                scanf("%d",&no1);
                printf("Enter  value no.two values:\n");
                scanf("%d",&no2);
                int sum = 0;
                sum = no1 + no2;
                printf("Ans is %d", sum);
                break; 
            }
            case 2 :{
                printf("Enter  value no. one values:\n");
                scanf("%d",&no1);
                printf("Enter  value no.two values:\n");
                scanf("%d",&no2);
                int sub = 0;
                sub = no1 - no2;
                printf("Ans is %d", sub);
                break;
            }
            case 3 :{
                printf("Enter  value no. one values:\n");
                scanf("%d",&no1);
                printf("Enter  value no.two values:\n");
                scanf("%d",&no2);
                int mul = 0;
                mul = no1 * no2;
                printf("Ans is %d", mul);
                break;
            }
            case 4 :{
                printf("Enter  value no. one values:\n");
                scanf("%d",&no1);
                printf("Enter  value no.two values:\n");
                scanf("%d",&no2);
                int division = 0;
                division = no1 / no2;
                printf("Ans is %d", division);
                break;
            }
            default: {
                printf("Enter valid values \n");
            }
        }
        
    return 0;
}