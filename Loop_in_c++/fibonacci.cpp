#include<iostream>
using namespace std;
//printing a is actual  two previous  value 
int main(){
    int n;
    cout<<"Enter no of term:";
    cin>>n;
    int a=0,b=1,c;
    for(int i=0; i<=n; i++){
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}