#include<iostream>
using namespace std;

    int fact(int x){
       int a=1;
        for(int i=1; i<=x;i++){
          a=a*i;
        }
      return a;
    }

int main(){

    int n;
    cout<<"Enter n:";
    cin>>n;
    int r;
    cout<<"Enter r:";
    cin>>r;

 cout<<fact(n)<<endl;
 cout<<fact(r)<<endl;;
  cout<< fact(n-r)<<endl;
  int f=fact(n)/(fact(r)*fact(n-r));
  cout<<f<<endl;
  return 0;
}