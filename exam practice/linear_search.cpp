#include<iostream>
using namespace std;
int linearsearch(int arr[] ,int target , int n){
    
    for(int i=0; i<n; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[5] = {2,4,3,1,5};
    int target =5;
  int res =  linearsearch(arr ,target ,5);
  
  if(res == -1){
    cout<<"Element is not present in array"<<endl;
  }

  else{
    cout<<"Element is present at index "<<res<<endl;
  }

  return 0;
}