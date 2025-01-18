#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square:";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 or j==1 or i==n or j==n){  
            cout<<"* ";}

            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}