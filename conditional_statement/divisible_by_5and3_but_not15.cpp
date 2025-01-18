#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter positive integer:";
    cin>>x;
    if((x%5==0 or x%3==0 ) and x%15!=0){
        cout<<"it is divisible by 5 or 3 but not 15";
    }

     else{
        cout<<"it can be divible or not divisible by 5 or 3 but divisible 15";
     }

     return 0;
}