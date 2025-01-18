#include<iostream>
#include<vector>
using namespace std;
long ways(int n , vector<int>dp){
    if(n<=1) return 1;
    if(n==2)return 2;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] =ways(n-1,dp)+ways(n-2,dp)+ways(n-3,dp);
}
int main(){
    long num;
    cout<<"Enter number of stairs for hops:";
    cin>>num;
    vector<int>dp(num+1 , -1);
    cout<<"the number of ways to hops reach top of stair:"<<ways(num, dp)<<endl;

}