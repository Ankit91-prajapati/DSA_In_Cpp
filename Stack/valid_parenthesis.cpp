#include<iostream>
#include<stack>
using namespace std;
bool valid(string s){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if( s[i] == '('){
         st.push(s[i]);
        }

        else{
            if( st.empty()){
                return 0;
            }

            else {
                st.pop();
            }
        }
    }

    return st.empty();
}
int main(){
    string s = "(())";
    cout<<valid(s);

}

