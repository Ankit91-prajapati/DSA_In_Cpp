#include<iostream>
#include<vector>
using namespace std;
vector<int>greatest(int arr[],int n){
    vector<int>v(n,-1);
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]<arr[j]){
                v[i] = arr[j];
                break;
            }
        }
    }
  return v;
}

int main(){
int arr[5] = {2, 4 ,5, 6, 7};

vector<int>p;
p = greatest(arr,5);
for(int i = 0 ; i<p.size();i++){
    cout<<p[i]<<endl;
}

}