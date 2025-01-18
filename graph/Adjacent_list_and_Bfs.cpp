#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>Bfs( int v, vector<int>adj[]){
    vector<int>ans;
    queue<int>q;
    q.push(0);  
    vector<bool>visited(v,0);
    visited[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0; i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            
            }
        }
    }

return ans;
}
int main(){
    // undirected graph
    int vertex,edge;
    cin>>vertex>>edge;

    vector<int>adj[vertex];

    int u,v;
    for(int i=0; i<edge; i++){
        cin>>u>>v;
        adj[u].push_back(v);
         adj[v].push_back(u);

    }

    for (int i =0; i<vertex; i++){
        cout<<i<<" ->";

        for(int j=0; j<adj[i].size(); j++)
        { 
        cout<<adj[i][j]<<" ";
        }

        cout<<endl;
    }
   vector<int>q = Bfs(vertex, adj);
   for(int i=0; i<q.size(); i++){
    cout<<q[i]<<" ";
   }
}