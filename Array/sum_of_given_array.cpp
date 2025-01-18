#include<iostream>
using namespace std;
int main(){
    int s[]={1,2,3,4,5,6,7};
    int n= sizeof(s)/sizeof(s[0]);
    cout<<"Element of array is"<<endl;
    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=s[i];
    }
    cout<<"sum of array :"<<sum<<endl;
    return 0;
}