#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d1 ={2,3,4,5,6};
    deque<int>d2({3,4,5,67});
    deque<int>d3(3,6);
    deque<int>d4;
    cout<<"Enter value:";
    for(int i =0; i<5; i++){
        int ele;
        cin>>ele;
        d4.push_back(ele);
    }

    for(const int &val:d4){
        cout<<val<<" ";
    }
    
     cout<<"\n";
    for(int &x: d1){
        cout<<x<<" ";
    }

     cout<<"\n";
    for(auto &x: d2){
        cout<<x<<" ";
    }

     cout<<"\n";
    for(auto it = d3.begin(); it!=d3.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl<<d3[4]<<endl;
}