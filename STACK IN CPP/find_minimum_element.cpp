#include<iostream>
#include<stack>
using namespace std;
stack<int> getminimum(int arr[],int n){

    stack<int>st;
    for(int i =0; i<n; i++){
        if(i == 0){
            st.push(arr[i]);
        }

        else{
            st.push(min(arr[i],st.top()));
        }
       
    }
   return st;
}
int main(){
    int arr[7] ={1,6,43,1,2,0,5};
    stack<int>s;
    s = getminimum(arr, 7);
     
    while(!s.empty()){
       cout<< s.top()<<" ";
        s.pop();
    }

    


    }
