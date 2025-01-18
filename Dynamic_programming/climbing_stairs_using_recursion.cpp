#include<iostream>
using namespace std;
//time complexity O(2^n)
//space complexity O(n)
int count(int i ,int n){
    if(i==n)return 1;
    if(i>n)return 0;
    return count(i+1, n)+count(i+2,n);
}
int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    cout<<"there is a different ways to climb stairs "<<count(0 ,n);
    return 0;
}