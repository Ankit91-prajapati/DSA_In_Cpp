#include<iostream>
#include<vector>
using namespace std;
int check_most_occurence(vector<int>&v){
    int count = 0, maxim_occur = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]==1){
            count++;
        }
        else{
            maxim_occur = max(count ,maxim_occur);
            count =0;
        }
    }
    return max(count ,maxim_occur);

}
int main(){
    vector<int>v ={1,1,0,0,1,1,1};
    cout<<"most consecutive occurence is"<<check_most_occurence(v);
}