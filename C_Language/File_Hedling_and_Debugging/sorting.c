#include<stdio.h>

void sortAscending(int arr[], int length){
    for(int i=0; i<length-1; i++){
        int isSort = 0;
        for(int j=0; j<=length-2; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSort = 1;
            }
        }
        if(isSort == 0)
            return;
    }
}

void sortDecending(int arr[], int length){
    for(int i=0; i<length-1; i++){
        int isSort = 0;
        for(int j=0; j<=length-2; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSort = 1;
            }
        }
        if(isSort == 0)
            return;
    }
}

int main(){
    int n1, n2;
    printf("Enter the size of First Array : ");
    scanf("%d", &n1);
    int array1[n1];
    for(int i=0; i<n1; i++){
        scanf("%d", &array1[i]);
    }
    printf("\n1. Sort Ascending ");
    printf("\n2. Sort Descending ");
    
    int choice = 0;
    scanf("%d", &choice);

    switch(choice){
        case 1 : sortAscending(array1, n1);
            break;
        case 2 : sortDecending(array1, n1);
    }

    printf("Sorted Array : ");
    for(int i=0; i<n1; i++){
        printf("%d ", array1[i]);
    }


    printf("Enter the size of Second Array : ");
    scanf("%d", &n2);
    int array2[n2];
    for(int i=0; i<n2; i++){
        scanf("%d", &array2[i]);
    }
    printf("\n1. Sort Ascending ");
    printf("\n2. Sort Descending ");
    scanf("%d", &choice);

    switch(choice){
        case 1 : sortAscending(array2, n2);
            break;
        case 2 : sortDecending(array2, n2);
    }
    printf("Sorted Array : ");
    for(int i=0; i<n2; i++){
        printf("%d ", array2[i]);
    }
    return 0;
}