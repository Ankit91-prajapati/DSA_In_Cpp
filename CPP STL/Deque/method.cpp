#include<iostream>
#include<deque>
using namespace std;
int  main(){
    deque<int>d;
    d.push_back(45);
    d.emplace_back(67);
    d.emplace(d.begin(), 78);
    d.insert(d.begin()+2, 90);
    d.push_front(89);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.at(3)<<endl;
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    cout<<"At:"<<d[3]<<endl;

    for(int & a:d){
        cout<<a<<endl;
    }

}