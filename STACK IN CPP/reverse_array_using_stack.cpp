#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> reverse(vector<int>v){
        stack<int>s1;
        for(int i=0 ;i<v.size(); i++){
            s1.push(v[i]);
        }
    
       int i=0;
         while(!s1.empty()){
           v[i] = s1.top();
           s1.pop();
           i++;
         }

         return v;

    }
    
};
int main(){
    solution s;
    vector<int>v ={ 2,3,4,5,6};
    vector<int> ans;
  ans =  s.reverse(v);
cout<<"printint reverse:";
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<"  ";
  }

  cout<<"\n";


  solution s2;
    vector<int>v2 ={ 5,3,9,5,6};
    vector<int> p;
  p =  s2.reverse(v2);
cout<<"printint reverse:";
  for(int i=0; i<p.size(); i++){
    cout<<p[i]<<"  ";
  }



}