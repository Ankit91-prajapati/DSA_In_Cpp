#include<iostream>
using namespace std;
int main(){
    int Ram,Shyam,Ajay;
    cout<<"Enter age of ram:";
       cin>>Ram;
    cout<<"Enter age of shyam:";
      cin>>Shyam;
    cout<<"Enter age of ajay:";
      cin>>Ajay;

     if (Ram<Shyam && Ram<Ajay){
        cout<<"Ram is youngest";
     }

    else if (Shyam<Ram && Shyam<Ajay){
        cout<<"shyam is youngest";
     }

     else{
        cout<<"ajay is youngest";
     }
     return 0;
}