#include<iostream>
using namespace std;
 class Swap{
    int a, b;
    public :
    void set(int a, int b){
        this-> a = a;
        this-> b = b;
    }

    int getA(){
        return this->a;
    }

    int getB(){
        return this->b;
    }
   friend void change( Swap&);
   
 };

  void change(Swap &a){
        a.a = a.a + a.b;
        a.b = a.a - a.b;
        a.a = a.a - a.b;
    }

 int main(){
 
    Swap obj;
    obj.set(5,4);
    change(obj);
    cout<<"A is : "<<obj.getA()<<endl;
    cout<<"B is : "<<obj.getB()<<endl;
    return 0 ;
 }