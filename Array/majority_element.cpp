#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// int majority(vector<int>&arr){
    
//    int n =arr.size();
//     for(int val:arr){
//          int freq = 0;
//         for(int ele:arr){
//             if(ele == val){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return val;
//         }
//     }
// }

 int majority(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int freq =1; 
   int ans = arr[0];
   int n =arr.size();
   

   for(int i=1; i<n; i++){
    if(arr[i]==arr[i-1]){
        freq++;
    }
    else{
        freq =1;
        ans =arr[i];
    }

    if (freq>n/2){
        return ans;
    }
   }
    
 }


// int majority(vector<int>&arr){
//     int n = arr.size();
//     int freq =0,ans =0;
//     for(int i=0; i<n; i++){
//         if(freq==0){
//             ans=arr[i];
//         }
//         if(ans == arr[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }
//     return ans;
// }

 int main(){
    vector<int>arr ={1,2,2,2,2,4};
    cout<<majority(arr)<<endl;
    }
