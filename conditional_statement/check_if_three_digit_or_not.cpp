#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter positive integer:";
    cin>>num;
    if(num>99 && num<1000){
        cout<<" it is three digit number ";
    }

    else{
        cout<<"it is not three digit number";
    }
}