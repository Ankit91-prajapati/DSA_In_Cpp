#include<iostream>
using namespace std;
int main(){
int i=3;
int*j;
int **k;
j= &i;
k=&j;
cout<<"address of i ="<<(&i)<<endl;
cout<<"value of i ="<<i<<endl;
cout<<"value of i ="<<*(&i)<<endl;
cout<<"value of i ="<<*j<<endl;
cout<<" address of i ="<<j<<endl;
cout<<"addresss if j ="<<(&j)<<endl;
cout<<"value of i = "<<**k;

return 0;
}