#include<iostream>
using namespace std;


inline int mul(int a, int b){
    return a*b;
}
inline int cubic(int c){
    return c*c*c;
}


int main(){
    int r, t, u; 
    cin>> r ;
    cin>> t;
    cin >> u;
    int ans = mul(r,t);
    cout<<"Multiplication is : "<<ans<<endl;
    ans = cubic(u);
    cout<<"Cube is : "<<ans;



    return 0;
}