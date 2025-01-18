#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class solution{ 
    public:
queue<int> reverse(queue<int>q){
    stack<int>st;
    int k =3;
    while(k--){
        st.push(q.front());
        q.pop();
    }
   int n = q.size();
     while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(n--){
        q.push(q.front());
        q.pop();
    }



return q;

  

}
};
int main(){
    queue<int>q;
    cout<<"Enter element:";
    for(int i=0; i<5; i++){
        int element;
        cin>>element;
        q.push(element);
    }

    solution s;
   queue<int>s1=s.reverse(q);
   int n = s1.size();
  while(n--){
    cout<<s1.front()<<endl;
    s1.push(s1.front());
s1.pop();
  }


}
