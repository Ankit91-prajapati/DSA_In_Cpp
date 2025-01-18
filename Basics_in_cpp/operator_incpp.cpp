#include<iostream>
using namespace std;
int main(){
    //Arithmetic operator
     int a,b;
     cout<<"Enter two number:";
     cin>>a>>b;
     cout<<a+b<<endl;
     cout<<a-b<<endl;
     cout<<a*b<<endl;
     cout<<a/b<<endl;
     cout<<a%b<<endl;
     //using direct number without using variable

    cout<<4+6<<endl;
     cout<<5-3<<endl;
     cout<<8*7<<endl;
     cout<<7/2.0<<endl;
     cout<<7%2<<endl;
     //Relational operator 
     int x,y;
     cout<<"Enter no:";
     cin>>x>>y;
     cout<<(x==y)<<endl;
     cout<<(x>=y)<<endl;
     cout<<(x<=y)<<endl;
     cout<<(x<y)<<endl;
     cout<<(x>y)<<endl;
     cout<<(x!=y)<<endl;

     //Logical operator
     cout<<(5==5 and 5==6)<<endl;
     cout<<(5>6 or 5<6)<<endl;
     cout<<!(5==5)<<endl;
     //assignment operator
     int c=4,d=7 ,e=6, f=8,g=9;
     c+=4;
     cout<<c<<endl;
     cout<<(d-=3)<<endl;
     cout<<(e*=6)<<endl;
     cout<<(f/=2)<<endl;
     cout<<(g%=2)<<endl;
 return 0;


}