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
cout<<"square of number:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]*arr[i]<<endl;
    }

}