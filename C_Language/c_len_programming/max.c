#include<stdio.h>
int maxNum(int array[],int size){
    int max =  array[0];
    for(int i = 0; i < size; i++){
        
        if(max <= array[i]){
            max = array[i];
        }
    }
    return max;
}


int main(){
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int max = maxNum(array, size);
    printf("%d",max);

    return 0;
}