#include<iostream>
using namespace std;

template <typename t>
class Swap{
    t* no1 ;
    t* no2 ;
    public :
    Swap(t* no1, t* no2){
        this->no1 = no1;
        this->no2 = no2;
    }

    void myswap(){
        *no1 = *no1 + *no2;
        *no2 = *no1 - *no2;
        *no1 = *no1 - *no2;
    }
};

int main(){
    int a = 5;
    int b = 6;
    Swap<int> obj(&a, &b);
    obj.myswap();
    cout<<a<<b;
    return 0;

}