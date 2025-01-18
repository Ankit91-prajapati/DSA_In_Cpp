#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0)return 0;
    if(n==1 or n==2)return 1;

    else{
        return n=fibo(n-1)+fibo(n-2);
    }

}
int main(){
    int n;
    cout<<"Enter term:";
    cin>>n;
  cout<<  fibo(n)<<endl;;
}