#include<iostream>
using namespace std;
class counter {
    private:
   static int count;
   public:
   counter(){
    count++;
   }
   
   void print(){
    cout<<"the number of object is "<<count<<endl;
   }

};
int counter:: count = 0;
int main(){
    counter x1;
    x1.print();

    counter x2;
    x2.print();

    counter x3;
    x3.print();
}