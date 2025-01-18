#include<iostream>
using namespace std;
int main(){
    int fact =1;
    int n;
    cout<<"Enter number to calculate its factorial:";
    cin>>n;
   if(n<0){
    cout<<"factorial is not defined for negative numbers"<<endl;
   }

   else{
    for(int i=1; i<=n;i++){
     fact *=i;
    }
    cout<<"the factorial of  "<<n<<"is:"<<fact<<endl;
   }
    
  return 0;  
}