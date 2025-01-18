#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class solution{
    public:
    bool valid(string v){
        stack<char>st;
        for(int i=0; i<v.size(); i++){
            if(v[i] == '('){
              st.push(v[i]);
            }

            else{
              if ( st.empty()){
                return 0;
              }

              else{
                st.pop();
              }
            }
        }
       return st.empty();
    }

};

int main(){

solution s;
string v ={"((()()))" };
cout<<s.valid(v)<<endl;

}