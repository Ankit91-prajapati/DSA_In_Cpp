#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s ={2,3,4,56,6};
    
    for(auto a:s){
        cout<<a<<" ";
    }
    
    for(auto i= s.begin(); i!=s.end(); i++){
        cout<<"\n"<<*i;
    }
     cout<<"\n";
    cout<<s.count(3)<<endl;
    cout<<s.size()<<endl;
    
}