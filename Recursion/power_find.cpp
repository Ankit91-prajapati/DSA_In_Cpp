#include<iostream>
using namespace std;
int power(int b,  int e){
    if(e==0)return 1;
    return b * power(b ,e-1);
}
int main(){
    int b ,e;
    cout<<"Enter base:";
    cin>>b;
      cout<<"Enter exponent:";
    cin>>e;
  cout<<  power(b,e)<<endl;

    return 0;

}