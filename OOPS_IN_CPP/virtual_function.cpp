#include<iostream>
using namespace std;
class parent{
    public:
    virtual void check(){
        cout<<"I am parent class"<<endl;
    }
};

class child:public parent{
    void check(){
        cout<<"I am  child  class"<<endl;
    }

};
int main(){
    // parent *p1 = new child;
    // p1->check();

    // child c1;
    // parent *p1 =&c1;
    // p1->check();
    parent p1;
    p1.check();

}