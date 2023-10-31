#include<iostream>
#include<cstring>
using namespace std;
class String{
    public:
    char str[100];
    String(){};

    String(const char array[]){
        strcpy(str, array);
    }
    String operator+ (String &obj){
        String result;
        strcpy(result.str, strcat(str, obj.str));

        return result;
    }
};
 

int main(){
    String obj1("mitesh"), obj2("Padariya");
    String conc = obj1 + obj2;
    cout<<"Result is : "<<conc.str;
    return 0;
}