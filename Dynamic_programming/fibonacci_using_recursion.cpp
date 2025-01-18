#include<iostream>
using namespace std;
//time complexity O(2^n)
//space complexity O(n)

int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter term:";
    cin>>n;
    cout<<"The value of"<<n<<"term is "<<fibo(n)<<endl;
}