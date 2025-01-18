#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    cout<<"Enter 3*3 matrix:"<<endl;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
        int mx=INT32_MIN;
        for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            mx= max(mx,arr[i][j]);
        }
          }
    
    cout<<"maximam element in matrix :"<<mx<<endl;
}