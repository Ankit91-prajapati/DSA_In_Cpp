#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter max range:";
    cin>>n;
    cout<<"prime number between1 to"<<n<<endl;
   bool flag;
   for(int i=1 ; i<=n;i++) {  
    flag=true;
   for(int j=2; j<i; j++){
      if(i%j==0){   
        flag=false;
        break;
        }
   }
     if( flag==true and i!=1){
        cout<<i<<endl;
     }
   }

}