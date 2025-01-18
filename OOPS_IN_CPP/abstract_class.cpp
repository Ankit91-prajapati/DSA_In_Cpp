#include<iostream>
using namespace std;
class parent{
    public:
    int age; 
    virtual void print() = 0;

};

class child:public parent{
    public:
    string name;

    child(string name ,int age){
        this->name = name;
        this->age = age;
    }
    void print(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }


};
int main(){
    child c1("raj mishra", 20);
    c1.print();





}