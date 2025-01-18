#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d1;
    d1.push_front(4);
    d1.push_back(8);
    d1.pop_back();
    cout<<d1.front()<<endl;
     cout<<d1.back()<<endl;
      cout<<d1.empty()<<endl;
       cout<<d1.size()<<endl;


}