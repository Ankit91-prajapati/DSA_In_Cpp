#include<iostream>
#include<string>
using namespace std;
class counter{
 private:
    static int count ;
   public:
    counter(){
        count++;
    }

    void print() {  
        cout<<"the no of object is:"<<count<<endl;
    }

};
int counter::count=0;
int main(){
counter c1;
 c1.print();
}