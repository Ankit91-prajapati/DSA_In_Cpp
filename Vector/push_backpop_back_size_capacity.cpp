#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
cout<<"Enter size of vector:";
cin>>n;
vector<int>v1(n);
cout<<"Enter element :"<<endl;
for(int i=0 ; i<n; i++){
    cin>>v1[i];
   }

cout<<"printing element:"<<endl;
for(int i=0 ; i<n; i++){
    cout<<v1[i]<<endl;;
   }
   //size and capacity
   cout<<"size:"<<v1.size()<<endl;
   cout<<"capacity:"<<v1.capacity()<<endl;

  //using push_back
   v1.push_back(8);
   cout<<"printing element:"<<endl;
for(int i=0 ; i<v1.size(); i++){
    cout<<v1[i]<<endl;;
   }
//size and capacity
 cout<<"size:"<<v1.size()<<endl;
   cout<<"capacity:"<<v1.capacity()<<endl;

    
v1.pop_back();
cout<<"printing element:"<<endl;
for(int i=0 ; i<v1.size(); i++){
    cout<<v1[i]<<endl;;
   }
   
   cout<<"size:"<<v1.size()<<endl;
  cout<<"capacity:"<<v1. capacity();
}