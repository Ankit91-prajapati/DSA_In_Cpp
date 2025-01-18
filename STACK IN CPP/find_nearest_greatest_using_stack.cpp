#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> greatest(int arr[],int n){
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(i);
            }

            else{
                while(!st.empty()&& arr[st.top()]<arr[i]){
                    ans[st.top()]=arr[i];
                    st.pop();
                }
                st.push(i);
            }
        }
      return ans;
    }

};
int main(){
    solution s;
    int arr[4] = {1,3,2,4};
 vector<int>p;
  p = s.greatest(arr, 4);

  for(int i=0; i<p.size(); i++){
    cout<<p[i]<<endl;
  }

}


// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// class solution{
//     public:
//     vector<int> greatest(int arr[],int n){
//         vector<int>ans(n,-1);
//         stack<int>st;
//         for(int i=n-1; i>=0; i--){
            
//                 while(!st.empty()&& arr[st.top()]<arr[i]){ 
//                      st.pop();
//                 }

//                      if(!st.empty()){ 
//                   ans[i] = arr[st.top()];
//                      }

//                 st.push(i);
//             }
         
//       return ans;
//     }

// };
// int main(){
//     solution s;
//     int arr[4] = {1,3,2,4};
//  vector<int>p;
//   p = s.greatest(arr, 4);

//   for(int i=0; i<p.size(); i++){
//     cout<<p[i]<<endl;
//   }

// }