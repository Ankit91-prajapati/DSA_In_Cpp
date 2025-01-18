#include<iostream>
using namespace std;
int main(){
    float a=4;
    float b=5,c=7,d=4;
    c++;
    cout<<(a+b)*c*d<<endl;
    cout<<(a+b)*++c*d<<endl;
    return 0;
}