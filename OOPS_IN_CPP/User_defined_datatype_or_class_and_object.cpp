#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float average;
    int age;

    void update(string name ,int runs ,float average ,int age){
        this->name = name;
        this->runs =runs;
        this->average = average;
        this->age =age;
    }

    void print (){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Average:"<<average<<endl;
        cout<<"Age:"<<age<<endl;

    }
};

class person{
    public:
    string name;
    int age;

};

int main(){
    cricketer c1;
    c1.name = "Rohit sharma";
    c1.runs = 15000;
    c1.average = 45.6;
    c1.age =38;
    c1.print();

cout<<"\n_______________________\n";
    cricketer c2;
    c2.name = "virat kohli";
    c2.runs = 20000;
    c2.average = 52.2;
    c2.age =35;
    c2.print();

    c1.update("hardik pandya", 2000 ,33.45 , 30);

    c1.print();


   

    person p1;
    p1.name = "ankit";
    p1.age = 19;
    cout<<"Name of person :"<<p1.name<<endl;
    cout<<"Age of person :"<<p1.age<<endl;

 return 0;

 
}