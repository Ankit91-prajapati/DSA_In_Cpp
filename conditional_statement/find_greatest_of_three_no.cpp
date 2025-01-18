#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three integer:"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest integer ";
    }

   else if(b>a && b>c){
        cout<<b<<"  is greatest integer ";
    }

      else {
        cout<<c<<" is greatest integer ";
    }
    return 0;
}