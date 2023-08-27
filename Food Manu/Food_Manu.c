#include<stdio.h>


int main(){
    printf("1. Pizza      price = 180rs/pcs\n");
    printf("2. Burger     price = 100rs/pcs\n");
    printf("3. Dosa       price = 120rs/pcs\n");
    printf("4. Idli       price = 50rs/pcs\n");
    int total_amount = 0;
    char ans = 'n';0000
    do{
        int item = 0;
        printf("please enter your choose....:",item);
        scanf("%d",&item);
        int amount = 0;
        switch(item){
            case 1 :{
                printf("you have selected pizza.\n");
                int price = 180;
                int number = 0;
                printf("Enter the quantity :",number);
                scanf("%d",&number);
                amount = price*number;
                printf("Amount :%d\n",amount);
                break; 
            }
            case 2 :{
                printf("you have selected Burger.\n");
                int price = 100; 
                int number = 0;
                printf("Enter the quantity :",number);
                scanf("%d",&number);
                amount = price*number;
                printf("Amount :%d\n",amount);
                break;
            }
            case 3 :{
                printf("you have selected Dosa.\n");
                int price = 120; 
                int number = 0;
                printf("Enter the quantity :",number);
                scanf("%d",&number);
                amount = price*number;
                printf("Amount :%d\n",amount);
                break;
            }
            case 4 :{
                printf("you have selected Idli.\n");
                int price = 50; 
                int number = 0;
                printf("Enter the quantity :",number);
                scanf("%d",&number);
                amount = price*number;
                printf("Amount :%d\n",amount);            
                break;
            }
        }
        total_amount = total_amount + amount;
        printf("Total_Amount is =%d\n",total_amount);
        printf("do you place more order ? y & n : ");
        scanf("%c",&ans);
    }
    while(ans == 'y');
    return 0;
}