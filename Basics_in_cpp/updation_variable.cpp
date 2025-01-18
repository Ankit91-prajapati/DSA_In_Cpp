#include<iostream>
using namespace std;
int main(){
    int a=4;
    cout<<&a<<endl;
    a=a+6;//a+=6
    cout<<&a<<endl;
    a=a*4;//a*=4
    cout<<a<<endl;\
    a=12;
    cout<<a<<endl;
    //by default garbage value if only declare variable
    int c;
    cout<<c;
}