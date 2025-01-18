#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number ";
    cin>>num;
   bool flag=true;
   for(int i=2; i<=num/2;i++){
      if(num%i==0){   
        flag=false;
        break;
        
      }
        
   }
   if(num==0 or num==1){
    cout<<"Neither prime nor composite";
   }

   else if(flag==true){
    cout<<"prime number";
   }

   else {
    cout<<"composite number";
   }

   return 0;
}