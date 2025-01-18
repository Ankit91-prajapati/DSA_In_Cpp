#include<iostream>
#include<vector>
using namespace std;
//time complexity O(n)
//space complexity O(n)
int main(){
    int n;
    cout<<"Enter term:";
    cin>>n;
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    dp[1] =1;
    for(int i =2; i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    cout<<"The value of "<<n<<" term is "<<dp[n]<<endl;
    
}