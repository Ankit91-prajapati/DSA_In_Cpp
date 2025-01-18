#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int original=num;
    int reverse=0;
    while(num!=0){
      int  remainder=num%10;
    reverse=reverse*10+remainder;
        num=num/10;  
    
    }
  if(reverse==original){  
   cout<<"it is a palindrome"; 
   }
   else{
cout<<"it is  not a palindrome"; 
   }
}