#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class solution{
    public:
stack<int> makebeautiful(vector<int>v){
    stack<int>st;
    for(int i=0; i<v.size();i++){
        if(st.empty()){
            st.push(v[i]);
        }


        else if(st.top()>=0){
            if(v[i]>=0){
                st.push(v[i]);

            }

            else{
                st.pop();
            }
        }


        else{
            if(v[i]<0){
                st.push(v[i]);
            }

            else{
                st.pop();
            }
        }
    }

    return st;
   }

};
int main(){
    solution s1;
    vector<int>v ={ 3,-1,-5,4,5,6};
    stack<int>s;
    s = s1.makebeautiful(v);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}