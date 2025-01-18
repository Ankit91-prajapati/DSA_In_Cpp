#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,5,6};
    int target=6;
    int count=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(target==arr[i]+arr[j]+arr[k]){
                    count++;
                }
            }

        }
    }
    cout<<count<<endl;
}