#include<iostream>
using namespace std;
int main(){
float principle, rate, time;
cout<<"Enter principle:";
cin>>principle;
cout<<"Enter rate:";
cin>>rate;
cout<<"Enter Time:";
cin>>time;
float si=(principle*rate*time/12)/100;
cout<<"simple interest is:"<<si<<endl;
return 0;


}