#include<iostream>
#include<cstring>
using namespace std;
class Student{
    int roll_number;
    public :
    Student(int roll_number){
        this->roll_number = roll_number;
    }
    void display(){
        cout<<"Roll Number is : "<<roll_number<<endl;
    }
};

class Test : public Student{
    int marks[2];
    char sub[2][50];
    public :
    Test(int marks[], char sub[2][50],int roll_number) : Student(roll_number){
        for(int i = 0; i<2; i++){
            strcpy(this->sub[i], sub[i]);
        }
        for(int i = 0; i<2; i++){
            this->marks[i] = marks[i];
        }
    }
    void display(){
        Student :: display();
        cout<<"Mark  is : "<<marks[0]<<"  "<<marks[1]<<endl;
        cout<<"sub is : "<<sub[0]<<"  "<<sub[1]<<endl;

    }
};

class Result : public Test{
    int total_marks;
    public :
    Result(int total_marks, int  marks[], char sub[2][50],int roll_number) : Test( marks, sub, roll_number) {
        this->total_marks = total_marks;
    }
    void display(){
        Test :: display();
        cout<<"Totle Marks is : "<<total_marks;
    }

};

int main(){
    int marks[] = {20, 44};
    char sub[2][50] = {"Guj", "Eng"};
    Result obj = Result(250,marks,sub,22);
    obj.display();
}