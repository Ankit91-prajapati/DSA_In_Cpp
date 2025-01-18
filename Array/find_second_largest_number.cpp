#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,4,5,6,8,10};
    int n=sizeof(array)/sizeof(array[0]);
    int mx=INT32_MIN;
    for(int i=0; i<n;i++){
      mx=max(mx,array[i]);
      
    }
    cout<<"Largest number "<<mx<<endl;
 int seclargest =INT32_MIN;
for(int i=0; i<n;i++){

      if(array[i]!=mx){
        seclargest=max(seclargest,array[i]);
        
      }
      
      
}
cout<<"second largest number "<<seclargest<<endl;

   }
    
    
    


