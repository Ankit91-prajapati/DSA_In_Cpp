#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array elements:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //initialize highest and lowest value with the first element
    int highest = arr[0];
    int lowest = arr[0];
    //traverse the array to find highest and lowest elements 
    for(int i=0; i<n; i++){
       highest = max(highest ,arr[i]);
       lowest = min(lowest ,arr[i]);
    }
    cout<<"Highest element is:"<<highest<<endl;
    cout<<"Lowest element is:"<<lowest<<endl;
    return 0;
}
