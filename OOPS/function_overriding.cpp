#include<iostream>
using namespace std;
class teacher{
  public: 
void print(){
    cout<<"parent class"<<endl;
}


};


class student:public teacher{

    public:
    void print(){
    cout<<"child class"<<endl;
}
};


int main(){
//     student s1;
//     s1.print();

  teacher t1;
  t1.print();

 }
    