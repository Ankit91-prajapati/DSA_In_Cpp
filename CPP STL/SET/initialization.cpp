#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s ={4,56,6,7,8};
    set<int>st;

    for(int i =0; i<5; i++){
        int ele;
        cin>>ele;
        st.insert(ele);
    }
    for( int val:s){
        cout<<val<<endl;
    }

     for( int val:st){
        cout<<val<<endl;
    }
    
}