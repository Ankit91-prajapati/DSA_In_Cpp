#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v= {4,3,2,1,5};

cout<<"printing element:"<<endl;

for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<endl;
}

cout<<"reverse order:"<<endl;
reverse(v.end(),v.begin());
 for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<endl;
}


cout<<"Ascending order:"<<endl;
sort(v.begin(),v.end());
 for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<endl;
}


cout<<"decending order:"<<endl;
sort(v.rbegin(),v.rend());
 for(int a=0; a<v.size(); a++) {
   cout<<v[a]<<endl;
}









}