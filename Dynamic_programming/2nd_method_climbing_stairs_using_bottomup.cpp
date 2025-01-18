#include<iostream>
#include<vector>
using namespace std;
//time complexity O(n)
//space complexity O(n)
int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0] =1;
    dp[1] =1;
    for(int i =2; i<=n; i++){
        dp[i] =dp[i-1]+dp[i-2]; 
    }
    cout<<"there is a different ways to climb stairs "<<dp[n];

}