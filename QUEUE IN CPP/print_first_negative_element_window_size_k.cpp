 #include<iostream>
#include<vector>
#include<queue>
using namespace std;
int display(queue<int>q ){
    while(!q.empty()){
        if(q.front()<0){  
            return q.front();
        }          
          q.pop(); 
    }
  return 0;   
}

int main(){
    int arr[] = {-8,2,3,-6,10};
    int n = 5;
    int k=2;
    queue<int > q;
    vector<int> ans;
    for(int i=0; i<k-1;i++){
        q.push(arr[i]);
    }

    for(int i=k-1; i<n; i++){
        q.push(arr[i]);
        ans.push_back(display(q ));
        q.pop();
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}