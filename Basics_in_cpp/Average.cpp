#include<iostream>
using namespace std;
int main(){
    float math,hindi, english;

    cout<<"Enter marks of three subject:";
      cin>>math>>hindi>>english;

    float average = (math+hindi+english)/3.0;
    cout<<"average of no is:"<<average<<endl;
    return 0;
}