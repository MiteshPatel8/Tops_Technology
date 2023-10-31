#include<iostream>
using namespace std;
class Calc{
    public:

    int mul(int a, int b){
        return a*b;
    }
    int divide(int a, int b){
        return a/b;
    }
    int addition(int a, int b){
        return a+b;
    }
};

int main() {

    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;
    Calc calculator;

    switch (operation) {
    case '+':
        cout << "Result: " << calculator.addition(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << calculator.mul(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << calculator.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operation" << endl;
        break;
    }
}