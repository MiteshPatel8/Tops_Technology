#include <stdio.h>
#include <string.h>

struct Student {
    int roll_number;
    char name[50];
    float marks;
};

union Money {
    int dollars;
    float euros;
};

int main() {
    struct Student student1;
    union Money money1;

    student1.roll_number = 101;
    strcpy(student1.name, "John");
    student1.marks = 95.5;

    money1.dollars = 100;
    money1.euros = 80.5;

    printf("Student Details:\n");
    printf("Roll Number: %d\n", student1.roll_number);
    printf("Name: %s\n", student1.name);
    printf("Marks: %f\n", student1.marks);

    printf("\nMoney Details:\n");
    printf("Dollars: %d\n", money1.dollars);
    printf("Euros: %f\n", money1.euros);

    return 0;
}
