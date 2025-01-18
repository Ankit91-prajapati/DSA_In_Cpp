#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    for(int i=0; i<5; i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
         }     }
    