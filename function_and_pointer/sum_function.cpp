#include<iostream>
using namespace std;
 int sum(int x, int y){
    return x+y;
 }
int main(){ 
    //pass by value
    int a,b;
    cout<<"Enter two number :";
    cin>>a>>b;
    cout<<"sum ="<<sum(a,b)<<endl;
    
}