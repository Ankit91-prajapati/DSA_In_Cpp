#include<iostream>
#include<vector>
//time complexity O(n)
//space complexity O(n)
using namespace std;
    int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    vector<int>dp(n+2, -1);
    dp[n] =1;
    dp[n+1] =0;
    for(int i = n-1; i>=0; i--){
        dp[i] = dp[i+1]+dp[i+2];
    }
    cout<<"there is a different ways to climb stairs "<<dp[0];
    return 0;

}