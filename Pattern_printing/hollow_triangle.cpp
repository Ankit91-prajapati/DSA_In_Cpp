#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int mid=n/2+1;
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=i; j++){
            if( j==1 or i==j or i==n ){

                cout<<" * ";
            }

            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}