#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter no of row:";
    cin>>m;
    cout<<"Enter no of column:";
    cin>>n;
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}