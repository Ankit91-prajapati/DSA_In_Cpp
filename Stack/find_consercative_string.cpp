#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int find(vector<string> v)
   {
    stack<string>s;
    for(int i=0; i<v.size(); i++){
        if(s.empty()){
            s.push(v[i]);
        }

        else if(s.top() ==v[i]){
            s.pop();
        }

        else{
            s.push(v[i]);
        }
    }
    
     return s.size();

   }

int main(){
    vector<string>v={"ab" ,"ac", "da", "da","ac","db","ea"};
    cout<<v.size()<<endl;

   cout<<find(v)<<endl;

    

}