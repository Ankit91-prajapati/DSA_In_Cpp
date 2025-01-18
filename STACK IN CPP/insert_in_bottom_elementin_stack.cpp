#include<iostream>
#include<stack>
using namespace std;
class solution{
    public:
    stack<int> insertbottom(stack<int>st){
        stack<int>temp;
        while(! st.empty()){
            temp.push(st.top());
            st.pop();
        }
        int x = 4;
        st.push(x);
     
     while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
     }

     return st;
    }


};
int main(){
    solution s;
    stack<int> st;
    cout<<"Enter element:";
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        st.push(element);
    }
    stack<int>p;
    stack<int>t;
   p = s.insertbottom(st);
  while(! p.empty()){
        t.push(p.top());
            p.pop();
        }

 while(! t.empty()){
    cout<<t.top()<<" ";;
            t.pop();
        }


}