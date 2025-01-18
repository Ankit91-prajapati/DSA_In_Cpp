#include<iostream>
using namespace std;
int main(){
    int arr[4][2];
    arr [0][0]=4;
     arr[0][1]=4;
     arr[1][0]=4;
     arr[1][1]=0;
     arr[2][0]=4;
     arr[2][1]=5;
      arr[3][0]=3;
     arr[3][1]=4;

        for(int i=0;i<4; i++){
            for(int j=0; j<2;j++){
                cout<<arr[i][j]<<"  ";

            }
            cout<<endl;
        }
        // initialization of 2d array

        cout<<"Initialization of 2d array:"<<endl;
        int array[3][3]  ={{4,5,3},{5,7,8},{9,7,8}};
        for(int i=0;i<3; i++){
            for(int j=0; j<3;j++){
                cout<<array[i][j]<<"  ";

            }
            cout<<endl;
        }

        
}