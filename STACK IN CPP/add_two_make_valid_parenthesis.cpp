#include<iostream>
#include<stack>
using namespace std;
class  solution{
    public:
    int two_make_valid(string s){
        stack<char>st;
    int count =0;
        for(int i=0; i<s.size(); i++){
            if(s[i]== '('){
                st.push(s[i]);
            }

            else{
                if(st.empty()){
                    count++;
                }

                else{
                    st.pop();
                }

                
            }
        }
        return count+st.size();
        
    }

};
int main(){
    solution s;
    string str ="((())";
   cout<< s.two_make_valid(str)<<endl;

}