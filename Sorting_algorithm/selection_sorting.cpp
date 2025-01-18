#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&vec){
    int n=vec.size();
     
    for(int i=0; i<n-1; i++){
       int min_index=i;
        for(int j=i+1; j<n; j++){
            if(vec[j]< vec[i]){
                min_index=j;
            }
        }
        if(i!=min_index){
            swap(vec[i] , vec[min_index]);
        }
    }
    
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
selectionsort(vec);
for(int i=0; i<n; i++){ 
    cout<<vec[i]<<endl;
}


}