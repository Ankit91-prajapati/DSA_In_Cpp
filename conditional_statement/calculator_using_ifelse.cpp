#include<iostream>
using namespace std;
int main(){
    float num1,num2 ,num3;
    char op;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter  second number :";
    cin>>num2;
    cout<<"Enter third number:";
    cin>>num3;
    cout<<"Enter operator:";
    cin>>op;
    if(op=='+'){
        cout<<num1<<"+"<<num2<<"+"<<num3<<"="<<num1+num2+num3<<endl;
        
    }
    else if(op=='-'){
        cout<<num1<<"-"<<num2<<"-"<<num3<<"="<<num1-num2-num3<<endl;
    }
   else  if(op=='*'){
        cout<<num1<<"*"<<num2<<"*"<<num3<<"="<<num1*num2*num3<<endl;
    }
   else if(op=='/') {
        cout<<num1<<"/"<<num2<<"/"<<num3<<"="<<num1/num2/num3<<endl;
    }

    return 0;
}