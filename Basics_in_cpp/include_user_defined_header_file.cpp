#include<iostream>
#include "sumheader.h"
#include "arithmetic.h"
using namespace std;
int main(){
     float s=sum(3.4,4.5);
    cout<<s<<endl;
    
    float a,b;
    cout<<"Enter number :";
    cin>>a>>b;

float p=multiply(a,b);
cout<<p<<endl;

cout<<add(4, 6)<<endl;
cout<<product(4, 6)<<endl;
cout<<division(6,2)<<endl;
return 0;
}