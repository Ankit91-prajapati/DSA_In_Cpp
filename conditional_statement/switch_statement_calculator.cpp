#include<iostream>
using namespace std;
int main(){
    
    int num1 ,num2  ,num3;

    char op;
    cout<<"Enter first number:";
      cin>>num1;
    cout<<"Enter  second number :";
       cin>>num2;
    cout<<"Enter third number:";
       cin>>num3;
    cout<<"Enter operator:";
        cin>>op;
    switch(op){
   case '+':
   cout<<num1 <<"+" << num2 << "+" <<num3 <<" = "<<num1+num2+num3;
    break;

       case '-':
   cout<<num1 <<"-" << num2 << "-" <<num3 <<" = "<<num1-num2-num3;
    break;

     
      case '*':
   cout<<num1 <<"*" << num2 << "*" <<num3 <<" = "<<num1*num2*num3;
    break;

       case '/':
   cout<<num1 <<"/" << num2 << "/" <<num3 <<" = "<<num1/num2/num3;
    break;

     case '%':
   cout<<num1 <<"%" << num2 << "%" <<num3 <<" = "<<num1/num2/num3<<endl;
    break;  
    
    default:
    cout<<"invalid operator";


    }


    return 0;
    

}