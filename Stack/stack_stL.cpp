#include<iostream>
#include<stack>
using namespace std;
int  main(){
    stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // cout<<s.size()<<endl;
    // cout<<s.empty()<<endl;

    int n;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        s.push(arr[i]);
    }
    
    while(!s.empty()){
        
       cout<< s.top()<<endl;;
       s.pop();
    }
}