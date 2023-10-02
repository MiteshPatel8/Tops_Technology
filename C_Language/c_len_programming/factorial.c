#include <stdio.h>

int main() {
    int fact = 1;
    int totalFactorial=1;
    printf("Enter number");
    scanf("%d",&fact);
    for(int i = 1; i <= fact; i++){
        totalFactorial = totalFactorial*i; 
    }
    printf("%d\n",totalFactorial);
    return 0;
}
