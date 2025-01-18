#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={1,2,3,4,5,6};
    int n =v.size();
    for(int start =0; start<n;start++){
        for(int end = start;end<n; end++){
            for(int i=start; i<=end; i++){
                cout<<v[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    
}