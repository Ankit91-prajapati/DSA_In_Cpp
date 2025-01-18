#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>p;
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        p.push(ele);
    }

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}