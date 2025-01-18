#include<iostream>
using namespace std;
class teacher{
  public: 
virtual void print()  = 0;
  


};


class student:public teacher{
  public:
  void print(){  
    cout<<"child  class"<<endl;
     }
};


int main(){
    student s1;
    s1.print();

  //teacher t1;
  // t1.print();

 }
    