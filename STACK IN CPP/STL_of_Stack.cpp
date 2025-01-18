#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(-1);
     s.push(8);
     s.push(9);
     cout<<s.size()<<endl;
     cout<<s.top()<<endl;
     cout<<s.empty()<<endl;
     s.pop();
     cout<<s.size()<<endl;
      cout<<s.top()<<endl;
    stack<int>s2;
   cout<<"push element in the stack:";
      for(int i = 1; i<=5 ; i++ ){ 
      int element;
      cin>> element;
      s2.push(element);
      }

      while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
      }



    



}