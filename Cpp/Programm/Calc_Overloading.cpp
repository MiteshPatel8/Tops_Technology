#include<iostream>
using namespace std;
class operater{
     public :
    int sum(int a, int b){
        return a + b;
    }
    int sum(float a, float b){
        return a + b;
    }

    int mul(int a, int b){
        return a * b;
    }
    int mul(float a, float b){
        return a * b;
    }

    int sub(int a, int b){
        return a - b;
    }
    int sub(float a, float b){
        return a - b;
    }

    int divide(int a, int b){
        return a / b;
    }
    int divide(float a, float b){
        return a / b;
    }


    
};

    int main(){
        operater obj;
        cout<<"Ans is : "<<obj.sub(5, 2);

        return 0;
    }