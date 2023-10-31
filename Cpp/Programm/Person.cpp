#include<iostream>
#include<cstring>
using namespace std;
class Person{
    int salary = 0;
    public:
    int age;
    char name[50];
    Person(){
    }

    Person(const char* name, int age){
        strcpy(this->name, name);
        this->age = age;
    }

    void printObj(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Age : "<<this->age<<endl;
        cout<<"Salary : "<<this->salary<<endl;
    }

    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return this->salary;
    }

};


int main(){
    Person viraj;
    strcpy(viraj.name, "viraj");
    viraj.age = 21;
    viraj.setSalary(3000);
    int s = viraj.getSalary();
    viraj.setSalary(s+5000);

    cout<<s;
    Person mitesh = Person("Mitesh", 25);

    viraj.printObj();
    mitesh.printObj();
    return 0;
}