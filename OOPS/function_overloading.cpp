#include<iostream>
#include<string>
using namespace std;
class arith{
    public:
    int sum(int a , int b){
        int c =a+b;
        return c;
    }

   double sum(int x , double y){
         double z=x+y;
       return z;
   }

};
int main(){
    arith a1;
 cout<<a1.sum(4, 6.4)<<endl;


}