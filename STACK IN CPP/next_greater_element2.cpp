#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> greatest(int arr[],int n){
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=0; i<(n*2); i++){
            if(st.empty()){
                st.push(i);
            }

            else{
                while(!st.empty()&& arr[st.top()]<arr[i%n]){
                    ans[st.top()]=arr[i%n];
                    st.pop();
                }
                st.push(i%n);
            }
        }
      return ans;
    }

};
int main(){
    solution s;
    int arr[4] = {1,6,2,5};
 vector<int>p;
  p = s.greatest(arr, 4);

  for(int i=0; i<p.size(); i++){
    cout<<p[i]<<endl;
  }

}
