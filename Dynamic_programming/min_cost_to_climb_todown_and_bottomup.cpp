// #include<iostream> //topdown approach
// #include<vector>
// using namespace std;
// int ways(int n ,vector<int>&cost, vector<int>&dp){
//     if(n<=1) return 0;
//     if(dp[n]!=-1){
//         return dp[n];
//     }
//     return min(cost[n-1]+ways(n-1, cost ,dp), cost[n-2]+ ways(n-2, cost,dp));
// }
// int main(){
    
//     vector<int>cost ={10,15,20};
//     int n = cost.size();
//     vector<int>dp(n+1 ,-1);
//     cout<<"the minimum cost for climbing stair " <<ways(n ,cost,dp);
// }

//bottomup approach
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>cost ={10,15,20};
    int n = cost.size();
    vector<int>dp(n+1 ,-1);
    dp[0] = 0;
    dp[1] =0;
    for(int i= 2; i<=n ;i++){
        dp[i] = min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2]);
    }
    cout<<"the minimum cost for climbing stair " <<dp[n];
}

