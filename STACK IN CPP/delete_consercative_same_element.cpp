#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class solution{
    public:
    int find(vector<string>v){
        stack<string>st;
        for(int i=0; i<v.size(); i++){
            if(st.empty()){
                st.push(v[i]);
            }

            else if(st.top() ==v[i]){
               st.pop();
            }

            else{
                st.push(v[i]);
            }
        }

  return st.size();
    }

};
int main(){
    solution s;
    vector<string>v = { "ab","ab","bg","bc"};
    cout<<s.find(v)<<endl;

}