#include<iostream>
using namespace std;
int main(){
    int p[]={1,2,3,4,5};
    int n= sizeof(p)/sizeof(p[0]);
    cout<<"Element of array is"<<endl;
    for(int i=0; i<n; i++){
        cout<<p[i]<<endl;
    }

    int product=1;
    for(int i=0; i<n; i++){
        product= product*p[i];
    }
    cout<<"product of array :"<<product<<endl;
    return 0;
}