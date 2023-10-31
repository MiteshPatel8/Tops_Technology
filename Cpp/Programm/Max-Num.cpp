#include<iostream>
using namespace std;
class Max{
    int a, b;
    public:
    void set(int a,int b){
        this->a = a;
        this->b = b;
    }
    
    friend int maxNum(Max);
};

int maxNum(Max m){
    if(m.a > m.b){
        return m.a;
    }
    return m.b;
}

int main(){
    Max obj;
    obj.set(4, 5);
    
    cout<<"Max Num is : "<<maxNum(obj);

    return 0;
}

