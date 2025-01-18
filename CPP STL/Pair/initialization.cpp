#include<iostream>
#include<vector>

using namespace std;
int main(){
    pair<int, int>p(1,2);
    cout<<p.first<<p.second;
    cout<<"\n";
    vector<pair<int,int> >vp;

    
  
  // for(int i =0; i<5; i++ ){
  //   int u;
  //   cin>>u;
  //    int v;
  //   cin>>v;
  //   vp.emplace_back(u,v);

  // }

   cout<<"Enter paired elements:";
   for(int i =0; i<5; i++ ){
    int u;
    cin>>u;
     int v;
    cin>>v;
    vp.emplace_back(make_pair(u,v));

  }
  for(auto &pair:vp){
    cout<<pair.first<<":"<<pair.second<<endl;
  }
    
}