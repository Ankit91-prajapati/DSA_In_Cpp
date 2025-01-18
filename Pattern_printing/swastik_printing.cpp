#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter side of square:";
    cin>>n;
    int mid=n/2+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){

        if((i==mid or j==mid )or (i==1 and j>=mid) or(  i==n and j<=mid ) or (j==1 and i<=mid) 
      or(j==n and i>=mid)){
             cout<<"* ";
        }
        else{  
            cout<<"  ";
        }
        }
        cout<<endl;
    }


    return 0;
}