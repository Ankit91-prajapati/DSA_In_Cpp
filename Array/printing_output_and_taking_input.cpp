#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter element:" ;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nElement of array is"<<endl;
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}