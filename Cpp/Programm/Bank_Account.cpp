#include<iostream>
#include<cstring>

using namespace std;

class Bank{
    int ac_number;
    int balance;
    char name[100];
    char typeOfAccount[50];
    
    public :

    void setValues(int ac_number,int balance,char name[],char typeOfAccount[]){
        this->ac_number = ac_number;
        this->balance = balance;
        strcpy(this->name, name);
        strcpy(this->typeOfAccount, typeOfAccount);
    }

    int deposite(int ammount){
        balance += ammount;
        return balance;
    }

    int withdraw(int ammount){
        if(balance >= ammount){
            balance -= ammount;
            return balance;

        }
        
        else{
            cout<<"innsuficient balance";
            return -1;
        }
    }

    void display(){
        cout<<"Employee name is : "<<name<<endl;
        cout<<"Your Balance Is : "<<balance<<endl;
    }

};


int main(){
    Bank obj;
    obj.setValues(5851,2000,"Mitesh","Savinng");
    obj.deposite(1000);
    obj.withdraw(200);
    obj.display();

    return 0;
}