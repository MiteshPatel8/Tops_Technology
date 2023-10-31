#include<iostream>
using namespace std;

template <typename T>
class Sorting{
    T* arr;
    int size;
    public :
    Sorting(T* arr, int size){
        this->arr = arr;
        this->size = size;
    }

    void sorting_arr(){
        for(int i = 0; i<size - 1; i++){
            for(int j = 0; j<size - 1; j++){
                int temp = 0;
                if(arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;

                }
            } 
        }
    }



};

int main(){
    int arr[] = {5,0,5,4,1,6,9,8};
    Sorting<int> obj(arr,8);
    obj.sorting_arr();
    for(int j = 0; j<8; j++){
        cout<<arr[j];
    } 
}