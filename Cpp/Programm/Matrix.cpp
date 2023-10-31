#include<iostream>
using namespace std;

class Matrix{
    public:
    int  size;
    int *array;


    Matrix operator+(Matrix &a){
        Matrix result;
        result.size = size;
        result.array = array;
        for(int i = 0; i < result.size; i++){
            result.array[i] = array[i] + a.array[i] ;
        }
        return result;
    }
};

int main(){
    Matrix obj, obj1;
    int arrayA[] = {1,2,3,4,5};
    obj.array = arrayA;
    obj.size = 5;
    int arrayB[] = {7,8,9,6,6};
    obj1.array = arrayB;
    obj1.size = 5;
    Matrix result = obj + obj1;

    for(int i = 0; i < result.size; i++){
        cout<< result.array[i] << " ";
    }

    return 0;
}