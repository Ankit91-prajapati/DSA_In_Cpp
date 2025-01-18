#include<iostream>
#include<vector>
using namespace std;
int check_dublicate(vector<int>&v){
    int j=1;
    for(int i=1; i<v.size(); i++){
        if(v[i]!=v[i-1]){
            v[j] =v[i];
            j++;
        }
    }
    return j;
}
int main(){
    vector<int> v={1,2,3,3,4,5,6,6};
      int n = check_dublicate(v);
    for(int i=0;i<n; i++){
        cout<<v[i]<<endl;
    }
}