#include<iostream>
using namespace std;
class parent{
    public:
    int age;
    
    virtual void check() = 0;
 void print(){
    cout<<"I am parent class"<<endl;
 }
    
};

class child:public parent{
    public:
    string name;
    void check(){
        cout<<"I am  child  class"<<endl;
    }


};
int main(){
    child c1;
    c1.check();

    // parent *p1;
    // p1->print();




}