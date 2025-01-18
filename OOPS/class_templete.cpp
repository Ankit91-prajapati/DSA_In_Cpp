#include<iostream>
using namespace std;
template<class x>
class maximum{
    private:
  x  num1;
  x num2;
  public:
  maximum(x n, x m){
    num1=n;
    num2=m;}
    void check(){
        if(num1>num2){
            cout<<num1<<"is maximum";
        }
        else{
            cout<<num2<<"is maximum";
        }
    }
  
};
int main(){
    maximum <int> max( 3 ,4);
    max.check();


}