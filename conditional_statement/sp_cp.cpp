#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost prize:";
    cin>>cp;
    cout<<"Enter selling prize:";
    cin>>sp;

    if(cp>sp){
        cout<<"Loss of "<<cp-sp<<" rupee"<<endl;
    }

  else if(cp<sp){
        cout<<"profit of "<<sp-cp<<" rupee"<<endl;
    }
    else{
        cout<<"no profit no Loss";
    }
    return 0;

}