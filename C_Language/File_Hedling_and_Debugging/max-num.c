#include<stdio.h>
int Find_max(int arr[], int array_size){
    int max = arr[0];
    for(int i = 0; i < array_size; i++){
        if(max <= arr[i]){
        max = arr[i];
            
        }
    }
    return max;

}
int main(){
    int array[] = {5,93,8,5,48,450};
    int array_size = sizeof(array)/sizeof(array[0]);
    printf("%d", Find_max(array,array_size));
    return 0;
}