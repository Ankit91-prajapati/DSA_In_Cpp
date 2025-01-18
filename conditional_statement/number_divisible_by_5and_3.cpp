#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter positive integer:";
    cin>>x;
    if(x%5==0 and x%3==0){
        cout<<"it is divisible by 5 and 3";
    }

     else{
        cout<<"it is not divisible by 5 and 3";
     }

     return 0;
}