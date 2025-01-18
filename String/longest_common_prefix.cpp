#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v = {"flower", "alow", "flight"};
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    cout<<v[0]<<endl;
    cout<<v[0][0];

    

}