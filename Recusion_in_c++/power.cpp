#include<iostream>
using namespace std;
int power( int a, int r){
    if(r==0) return 1;
  return a*power(a,(r-1)) ;
}
int main(){
    int a;
    cout<<"Enter base:";
    cin>>a;
    int r;
    cout<<"Enter exponent:";
    cin>>r;
   cout<<power(a,r )<<endl;;
}