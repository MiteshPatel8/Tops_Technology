#include<stdio.h>
int main(){
    int x;
    printf("Enter your choice : \n");
    printf("1. Circle \n2. Triangle \n3. Rectangle\n");
    scanf("%d",&x);
    switch(x){
        case 1: 
            {
                float r;
                printf("Enter radius of circle : ");
                scanf("%f",&r);
                printf("area of circle is %f",3.14*r*r);
            }
            break;
        case 2: 
            {
                float b, h;
                printf("Enter length of base of circle : ");
                scanf("%f",&b);
                printf("Enter height of circle : ");
                scanf("%f",&h);
                printf("arra of tringle %f",((b*h)/2));
            }
            break;
        case 3:
           { 
                float l, w;
                printf("Enter width of rectangle : ");
                scanf("%f",&w);
                printf("Enter length of circle : ");
                scanf("%f",&l);
                printf("area of rectangle %f",l*w);
            }
            break;
        default:
            printf("plz enter valid character");
    }

    return 0;
}