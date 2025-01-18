#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first integer:";
    cin>>a;
    cout<<"Enter second integer:";
    cin>>b;
    cout<<"Enter third integer:";
    cin>>c;
    if(a<b && a<c){
        cout<<a<<" is least integer ";
    }

   else if(b<a && b<c){
        cout<<b<<"  is least integer ";
    }

      else {
        cout<<c<<" is least integer ";
    }
    return 0;
}