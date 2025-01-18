#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l ={3,4,5,56};
    l.push_back(66);
    l.push_front(78);
    for(const int &a:l){
        cout<<a<<endl;
    }
    l.pop_back();
    for(const int &a:l){
        cout<<a<<endl;
    }
    l.pop_front();
    for(const int &a:l){
        cout<<a<<endl;
    }
    cout<<l.front()<<endl;
     cout<<l.back()<<endl;
      cout<<l.empty()<<endl;
       l.erase(l.begin());
         for(const int &a:l){
        cout<<a<<endl;
    }
    l.remove(56);
   l.insert(l.begin(), 67);
    for(const int &a:l){
        cout<<a<<endl;}
    l.sort();
    for(const int &a:l){
        cout<<a<<"  ";}
     cout<<endl<<l.size()<<endl;;
    l.reverse();
     for(const int &a:l){
        cout<<a<<"  ";}
}