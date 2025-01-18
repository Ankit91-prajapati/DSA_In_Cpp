#include<iostream>
using namespace std;
class parent{
    public:
    void check(){
        cout<<"I am parent class"<<endl;
    }
};

class child:public parent{
    public:
    void check(){
        cout<<"I am  child  class"<<endl;
    }

};
int main(){
    parent p1;
    p1.check();

    child c1;
    c1.check();


}