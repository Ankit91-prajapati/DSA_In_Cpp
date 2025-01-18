#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int>m;
    m ={{"Ankit",78},
      {"Ankur",678}
    };

   map<int, int>m1;
   for(int i =0; i<5; i++){
    int key;
    cout<<"key:";
    cin>>key;
    
    int value;
    cout<<"value:";
    cin>>value;
    m1[key] =value;
    cout<<"\n";
   }
  for(auto &pair:m){
    cout<<pair.first<<":"<<pair.second<<" ";
  }

  for(auto i =m1.begin(); i!=m1.end();i++){
    cout<<i->first<<":"<<i->second;
    cout<<endl;
  }



    

}