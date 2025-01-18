#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int>cost ={10,15,20};
    int n = cost.size();
    int pre = 0;
    int pre2 =0;
    int curr;
    for(int i= 2; i<=n ;i++){
        curr =min(cost[i-1]+pre,cost[i-2]+pre2);
        pre2 = pre;
        pre =curr;
    }
    cout<<"the minimum cost for climbing stair " <<curr;
}