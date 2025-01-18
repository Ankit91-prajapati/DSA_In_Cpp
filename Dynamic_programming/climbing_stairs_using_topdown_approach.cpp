#include<iostream>
#include<vector>
using namespace std;
//time complexity O(n)
//space complexity O(n)
int count(int i ,int n , vector<int>&dp){
    if(i==n)return 1;
    if(i>n)return 0;
    if(dp[i]!= -1){
        return dp[i];
        }
    return dp[i]=count(i+1, n, dp)+count(i+2,n, dp);
}
int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    vector<int>dp(n+2,-1);
    cout<<"there is a different ways to climb stairs "<<count(0 ,n, dp);
    return 0;
}