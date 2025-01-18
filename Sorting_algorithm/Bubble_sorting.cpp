#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements:";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
  
    for(int i=0; i<n-1; i++){
       bool  flag=true;
        for( int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                flag =false;
                swap(v[j] , v[j+1]);
                
                
            }
        }
        if(flag==true)break;
    }

cout<<"After sort elements:"<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<endl;
    }
    
}