#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v= {1,2,3,4,5};

cout<<"printing element:"<<endl;

for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<endl;
}


cout<<"insert element:"<<endl;
v.insert(v.begin()+0,5);
for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<" ";
}

v.erase(v.begin()+2);
cout<<"\nerase element:";
for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<" ";
}

v.clear();
cout<<"\nclear element:";
for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<" ";
}

}


