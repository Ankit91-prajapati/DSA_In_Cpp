#include<iostream>
#include<stack>
using namespace std;
stack<int> insert_element(stack<int>st){
    stack<int>temp;
    while(!st.empty()){
        temp.push(st.top());
       st.pop();
    }

    int x =4;
    st.push(x);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    return st;

}

int main(){
    stack<int> st;
    cout<<"Enter elements:";
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        st.push(element);
    }
 stack<int>s;
 stack<int>p;
   s = insert_element(st);

    while(! s.empty()){
     p.push( s.top());
        s.pop();
    }

   while(! p.empty()){
    cout<< p.top()<<"  ";
        p.pop();
    }


    return 0;

}

