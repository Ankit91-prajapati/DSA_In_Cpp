#include<iostream>
using namespace std;
void print(int arr[],int n){
    
cout<<" Element of array:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    print(arr,n);
return 0;
}