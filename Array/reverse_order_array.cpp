#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j;
    int b[5];
    for(int i=0;i<n;i++){
        j=n-1-i;
        b[i]=arr[j];
        //cout<<b[i]<<endl;
        }

        cout<<"reverse"<<endl;
     for(int i=0;i<5;i++){ 
       cout<< b[i]<<endl;
    }
}

