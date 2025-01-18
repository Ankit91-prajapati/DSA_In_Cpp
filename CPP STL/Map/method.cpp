#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int>unmp ={{"Ankit", 456},{"Ankur" ,568}, {"Ankut",456} };
    for(auto &pair: unmp){
        cout<<pair.first<<":"<<pair.second<<endl;
    }

   cout<< unmp.at("Ankit")<<endl;
   unmp.emplace("sandeep",345);
   for(auto i = unmp.begin();i!=unmp.end(); i++){
     cout<<i->first<<":"<<i->second<<endl;
   }
   cout<<unmp.count("Ankit")<<endl;;
   cout<<unmp.size()<<endl;

   unordered_map<string, int>unmp1(3);
   cout<<"Enter pair in the map:\n";
   for(int i =0; i<3; i++){
      string key;
      cout<<"key:";
      cin>>key;
      int value;
      cout<<"value:";
      cin>>value;
      unmp1[key] = value;
   }
   
   for(auto &pair: unmp1){
        cout<<pair.first<<":"<<pair.second<<endl;
    }

    
}