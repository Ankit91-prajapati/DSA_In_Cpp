#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,4,5,6,8,10};
    int n=sizeof(array)/sizeof(array[0]);
    int  targetsum = 10;
    int count =0;
    for(int i=0; i<n;i++){
       for(int j=i+1; j<n;j++) {
        if(targetsum==array[i]+array[j]){

            count++;
        }
       }
    }
    cout<<count<<endl;

   }
    
    
    


