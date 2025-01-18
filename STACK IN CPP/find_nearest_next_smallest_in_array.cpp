// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// class solution{
//     public:
//     vector<int>smallest(vector<int>&arr, int n){
//         vector<int>ans(n,-1);
//         stack<int>st;
//         for(int i=0; i<n; i++){
        
//                 while(!st.empty()&& arr[i]<arr[st.top()] ){
//                     ans[st.top()] = arr[i];
//                     st.pop();
//                 }
//                 st.push(i);
            
//         }
//         return ans;
//     }
// };
// int main(){
//     solution s;
//   vector< int >arr = {2,3,1 };
//    vector<int>p;
//   p = s.smallest(arr,3);

//   for(int i=0 ;i<3; i++){
//     cout<<p[i]<<endl;
//   }




// }

#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int>smallest(vector<int>&arr, int n){
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1; i>=0; i--){
        
                while(!st.empty()&& arr[i]<arr[st.top()] ){
                    ans[st.top()] = arr[i];
                    st.pop();
                }
                st.push(i);
            
        }
        return ans;
    }
};
int main(){
    solution s;
  vector< int >arr = {1,6,2};
   vector<int>p;
  p = s.smallest(arr,3);

  for(int i=0 ;i<3; i++){
    cout<<p[i]<<endl;
  }




}