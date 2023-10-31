#include<iostream>
#include<cstring>
using namespace std;

class calc{
    int num1;
    int num2;
    char op;
    public :
    calc(int num1, int num2,char op){
        this->num1 =num1;
        this->num2 =num2;
        this->op = op;
    }
    double calculate(){
        if(op == '+')
            return num1 + num2;
        else if(op == '-')
            return num1 - num2;
        else if(op == '*')
            return num1 * num2;
        else if(op == '/')
            return (double)num1 / (double)num2;

    }
};

int main(){
    int a = 3;
    int b = 5;
    calc obj(a, b, '+');
    // calc obj = calc(a, b,'+');
    cout<<"Ans is : "<<obj.calculate();
    
    return 0;
}