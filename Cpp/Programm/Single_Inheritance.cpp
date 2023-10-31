#include<iostream>
#include<cstring>

using namespace std;

class Cricketer{
    int age;
    char name[120];
    public:
    int total_match;
   
    Cricketer(int age, char name[], int total_match){
        this->age = age;
        strcpy(this->name, name);
        this->total_match = total_match;
    }
    void dislay(){
        cout<<"Name of crickter is :"<<name<<endl;
        cout<<"Age of crickter is :"<<age<<endl;
        cout<<"Matches of crickter is :"<<total_match<<endl;
    }

};

class Batsman :private Cricketer{
    int total_run, ave_run, best_performance;
    public:
    
    Batsman(int total_run,int best_performance, int age, char name[], int total_match): Cricketer( age,  name,  total_match){
        this->total_run = total_run;
        this->best_performance = best_performance;
    }
    int calc_ave(){
        ave_run = total_run / total_match;
        return ave_run;
    }
    void dislay(){
        Cricketer ::dislay();
        cout<<"Runs of crickter are :"<<total_run<<endl;
        cout<<"Ave. runs of crickter is :"<<ave_run<<endl;

    }
};

int main(){
    Batsman obj = Batsman(5000,101,25,"Mitesh",25);
    obj.calc_ave();
    obj.dislay();
    
}