#include<stdio.h>

int main() {
   int number[10];
   printf("Enter number");
   for(int i = 0; i<10;i++){
    scanf("%d",&number[i]);
   }

//    count even number
    int countEven = 0;
    for(int i = 0; i<10;i++){
        if(number[i]%2 ==0){
            countEven++;
        }
    }
    printf("Total even number are : %d\n",countEven);


//      count odd number
    int countOdd = 0;
    for(int i = 0; i<10;i++){
        if(number[i]%2 !=0){
            countOdd++;
        }
    }
    printf("Total odd number are : %d\n",countOdd);


//      sum of even number
    int sumOfEven = 0;
    for(int i = 0; i<10; i++){
        if(number[i] % 2 == 0){
            sumOfEven += number[i];
        }
    }
    printf("Sum of even number are :%d\n",sumOfEven);


//      sum of odd number

    int sumOfOdd = 0;
    for(int i = 0; i<10; i++){
        if(number[i] % 2 != 0){
            sumOfOdd += number[i];
        }
    }
    printf("Sum of even number are :%d",sumOfOdd);

   return 0;
}
