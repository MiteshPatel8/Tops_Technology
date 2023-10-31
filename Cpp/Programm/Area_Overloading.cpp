#include<iostream>
using namespace std;

class Area{    
    public :
    double findArea(double r){
        return 3.14 * r * r;
    }
    double findArea(double r, double c ){
        return r * c;
    }
    double findArea(double r, int b){
        return (r * (double)b)/2;
    }

};

int main(){
    Area obj;
    cout<<"ans is : "<<obj.findArea(2.15, 5);
    return 0;
}