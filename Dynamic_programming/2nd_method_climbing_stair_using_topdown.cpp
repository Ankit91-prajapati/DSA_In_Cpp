#include<iostream>
#include<vector>
//time complexity O(n)
//space complexity O(n)
using namespace std;
//program line by line chalata hai
int count(int n , vector<int>&dp){
    if(n<=1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=count(n-1, dp)+count(n-2,dp);
}
int main(){
  int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    vector<int>dp(n+1 ,-1);
      cout<<"there is a different ways to climb stairs "<<count(n, dp);
}