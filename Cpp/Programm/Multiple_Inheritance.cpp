#include<iostream>
#include<cstring>

using namespace std;
class person{
    int age;
    char name[100];
    public :

    person(int age, const char* name){
        this->age = age;
        strcpy(this->name, name);
    }
    void display(){
        cout<<"Name is : "<<name;
        cout<<"age is : "<<age;
    }

};

class Student :public person{
    double per;
    public :
    Student(double per,int age, const char* name):person( age, name){
        this->per = per;
    }
    void display(){
        person ::display();
        cout<<"per is : "<<per;
    }
};

class Teacher :public person{
    int salary;
    public :
    Teacher(int salary,int age, const char* name):person( age, name){
        this->salary = salary;
    }
    void display(){
        person ::display();
        cout<<"salary is : "<<salary;
    }

};

int main(){
    Teacher obj = Teacher(25000,20,"rmp");
    obj.display();
    Student mit = Student(88.99,22,"Mitesh");
    mit.display();
}