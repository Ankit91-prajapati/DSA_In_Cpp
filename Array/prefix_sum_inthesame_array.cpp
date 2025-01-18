#include<iostream>
#include<vector>
using namespace std;
void runningsum(vector<int>&vec){
    int n=vec.size();
   for(int i=1; i<n; i++){
       vec[i] = vec[i-1]+vec[i];
       
    } 
}
int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    runningsum(vec);
    for(int i=0; i<n; i++){
        cout<<vec[i]<<endl;
    }
}