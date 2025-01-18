#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void reverse(vector<char>&v){
    stack<int> s;
    for(int i=0; i<v.size();i++){
        s.push(v[i]);
    }
  int i=0;
    while(!s.empty()){
        v[i]=s.top();
        i++;
        s.pop();
    }


}
int main(){

    vector<char> v;
    cout<<"Enter element:";
    for(int i=0; i<5; i++){
        char ch;
        cin>>ch;
        v.push_back(ch);
    }
    reverse(v);

     for(int i=0; i<5; i++){
    
        cout<<v[i]<<"    ";
     }


    return 0;
}