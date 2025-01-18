#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter max range:";
    cin>>n;
    cout<<"composite number between1 to "<<n<<endl;
   bool flag;
   for(int i=1 ; i<=n;i++) {  
    flag=true;
   for(int j=2; j<=i/2; j++){
      if(i%j==0){   
        flag=false;
        break;
        }
   }
     if( flag==false ){
        cout<<i<<endl;
     }
   }

}