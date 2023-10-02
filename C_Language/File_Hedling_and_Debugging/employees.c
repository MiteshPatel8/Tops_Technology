#include<stdio.h>
#include <string.h>
struct info {
    int no;
    int age;
    char name[100];
    char address[100];
};


int main(){
    struct info ep[5];

    for(int i=0; i<5; i++){
        printf("\nEnter the name of Employee : ");
        fgets(ep[i].name, sizeof(ep[i].name), stdin);
        ep[i].name[strcspn(ep[i].name, "\n")] = '\0';
        printf("\nEnter the Emp No : ");
        scanf("%d", &ep[i].no);
        printf("\nEnter the age of Emp : ");
        scanf("%d", &ep[i].age);
        getchar();
        printf("\nEnter the address of Emp : ");
        fgets(ep[i].address, sizeof(ep[i].address), stdin);
        ep[i].address[strcspn(ep[i].address, "\n")] = '\0';

    }

    for(int i=0; i<5; i++){
        printf("\nName of Employee : %s ", ep[i].name);
        printf("\nEmp No : %d ", ep[i].no);
        printf("\nAge of Emp : %d ", ep[i].age);
        printf("\nEnter the address of Emp : %s ", ep[i].address);
    }
    return 0;
}
