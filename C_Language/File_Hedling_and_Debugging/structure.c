#include<stdio.h>

struct info {
    int no;
    int age;
    char name[100];
    char address[100];
};


int main(){
    struct info emp = {1, 23, "mitesh", "aniyara rajkot"};
    printf("emp no = %d\n name of employee = %d\n adress of employee = %s\n age is = %s", emp.no, emp.age, emp.name, emp.address);
    return 0;
}