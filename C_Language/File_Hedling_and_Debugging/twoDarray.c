#include<stdio.h>
int main(){
    int array[4][4];
    int sec_array[4][4];
    int result[4][4];
    printf("Enter array values");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &array[i][j]);
        }
        printf("\n");
    }

    
    printf("Enter second array values");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d ", &sec_array[i][j]);
        }
        printf("\n");
    }

    
    printf("Addition of 2d array\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           result[i][j] = array[i][j] + sec_array[i][j];
           printf("%d ", result[i][j]);
        }
        printf("\n");
    }


    printf("Substraction  of 2d array\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
           result[i][j] = array[i][j] - sec_array[i][j];
           printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of 2d array\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                result[i][j] += array[i][k]* sec_array[k][j];
            }
           printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
