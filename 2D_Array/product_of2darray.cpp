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
    int product =1;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            product*=arr[i][j];
        }
    }
    cout<<"sum of 2d array :"<<product;
}