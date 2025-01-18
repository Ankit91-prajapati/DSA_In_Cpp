#include<iostream>
#include<queue>
#include<stack>
using namespace std;
queue<int> reverse(queue<int>q){
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

     while(!st.empty()){
        q.push(st.top());
        st.pop();
    }



return q;

  

};
int main(){
    queue<int>q;
    cout<<"Enter element:";
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        q.push(element);
    }
queue<int>s;
  s = reverse(q);
   int n = s.size();
  while(n--){
    cout<<s.front()<<endl;
    s.push(s.front());
    s.pop();
  }


}
