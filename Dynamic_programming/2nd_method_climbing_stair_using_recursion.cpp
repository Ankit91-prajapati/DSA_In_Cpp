#include<iostream>
using namespace std;
int count(int n){
    if(n<=1)return 1;
    return count(n-1)+count(n-2);
}
int main(){
  int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
      cout<<"there is a different ways to climb stairs "<<count(n);
}