#include<iostream>
#include<vector>
using namespace std;
int ways(int n ,vector<int>&cost){
    if(n<=1) return 0;
    return min(cost[n-1]+ways(n-1, cost), cost[n-2]+ ways(n-2, cost));
}
int main(){
    
    vector<int>cost ={10,15,20};
    int n = cost.size();
    cout<<"the minimum cost for climbing stair" <<ways(n ,cost);
}


