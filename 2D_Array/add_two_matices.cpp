#include<iostream>
using namespace std;
int main(){
    
    int arr[3][3];
    cout<<"Enter first 3*3 matrix:"<<endl;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
        
    }
    

    int brr[3][3];
    cout<<"Enter second 3*3 matrix:"<<endl;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            cin>>brr[i][j];
        }
        
    }

    int result[3][3];
    cout<<"Result 3*3 matrix:"<<endl;
    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            result[i][j]=arr[i][j]+brr[i][j];
           cout<<result[i][j]<<" ";
        } 
        cout<<endl; 
    }


 
}