#include<iostream>
#include<vector>
using namespace std;


// int main(){
//     long num;
//     cout<<"Enter number of stairs for hops:";
//     cin>>num;
//     vector<int>dp(num+1 , -1);
//     dp[0] =1;
//     dp[1] =1;
//     dp[2] =2;
//     for(int i =3; i<=num; i++){
//         dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
//     }
//     cout<<"the number of ways to hops reach top of stair:"<<dp[num]<<endl;

// } 

int main(){
    long num;
    cout<<"Enter number of stairs for hops:";
    cin>>num;
    
   int  pre3 =1;
    int pre2 =1;
    int pre1 =2;
    int curr;
    for(int i =3; i<=num; i++){
        curr =pre1+pre2+pre3;
        pre3=pre2;
        pre2 =pre1;
        pre1 =curr;
    }
    cout<<"the number of ways to hops reach top of stair:"<<curr<<endl;

}