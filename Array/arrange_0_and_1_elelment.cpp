#include<iostream>
#include<vector>
using namespace std;
void arrange(vector<int>&v){
    int count=0;
  for(int i=0; i<v.size(); i++){
    if(v[i] ==0){
  count++;
    }
  }



  for(int i=0; i<v.size(); i++){
    if(i<count){
        v[i]=0;
    }


    else{
        v[i]=1;
    
    }  }

} 


int main(){
    vector<int>v ={1,1,1,0,0,0,1};
    arrange(v);
    cout<<"Element of array:"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}