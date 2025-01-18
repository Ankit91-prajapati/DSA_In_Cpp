#include<iostream>
#include<vector>
using namespace std;
vector<int> insertionsort(vector<int>vec){
    int n=vec.size();
    for(int i=0; i<n-1; i++){
        int j=i+1;
        while(j>=1&& vec[j]<vec[j-1]){
            swap(vec[j],vec[j-1]);
            j--;
        }
            
        }

        return  vec;
    }

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements:";
    for(int i=0; i<n; i++){ 
    cin>>vec[i];
}
vector<int>v;
v = insertionsort(vec);
for(int i=0; i<n; i++){ 
    cout<<v[i]<<endl;
}

return 0;
}