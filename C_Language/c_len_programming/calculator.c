#include<stdio.h>
int main(){
    int s1, s2, s3;
    printf("enter Oprand - 1 : ");
    scanf("%d",&s1);
    printf("enter Oprand - 2 : ");
    scanf("%d",&s2);
    printf("select opretor :\n");
    printf("1. Addition \n 2. Substraction \n 3. Mutiplication \n 4. Division \n 5. Modulo \n");
    scanf("%d",&s3);

    switch(s3){
        case 1:{printf("%d",s1+s2);
                break;}
        case 2:{printf("%d",s1-s2);
                break;}
        case 3:{printf("%d",s1*s2);
                break;}
        case 4:{printf("%d",s1/s2);
                break;}
        case 5:{printf("%d",s1%s2);
                break;}
    }


    return 0;
}