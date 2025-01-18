#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    cout<<"Enter element:";
    for(int i=1; i<=5; i++){
        int element;
        cin>>element;
        st.push(element);
    }

    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }


  cout<<"printing element:";
    while(!temp.empty()){
        cout<<temp.top()<<"  ";
        temp.pop();
    }

}