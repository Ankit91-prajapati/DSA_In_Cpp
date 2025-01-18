#include<iostream>
using namespace std;
long ways(int n){
    if(n==0) return 1;
    if(n<0)return 0;
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main(){
    long num;
    cout<<"Enter number of stairs for hops:";
    cin>>num;
    cout<<"the number of ways to hops reach top of stair:"<<ways(num)<<endl;

}