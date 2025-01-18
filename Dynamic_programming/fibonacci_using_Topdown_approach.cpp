#include<iostream>
#include<vector>
//Time complexity O(n)
//Space complexityO(n)
using namespace std;
int fibo(int n,vector<int>&dp){
    if(n<=1) return n;

    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fibo(n-1,dp)+fibo(n-2,dp);
}
int main(){
    int n;
    cout<<"Enter term:";
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<"The value of "<<n<<" term is "<<fibo(n,dp)<<endl;
}
