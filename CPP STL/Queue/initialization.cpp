#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0; i<6;i++){
        int ele;
        cin>>ele;
        q.push(ele);
    }

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    
    }
    

    
}
