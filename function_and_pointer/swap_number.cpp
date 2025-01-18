#include<iostream>
using namespace std;
void swap(int* x, int* y){
    int temp = *x;
    *x =*y;
    *y=temp;
 }
int main(){ 
    //pass by value
    int a,b;
    cout<<"Enter two number :";
    cin>>a>>b;
    cout<<"before swap number  a = "<<a<<"  b= "<<b<<endl;
    swap(&a,&b);
    cout<<"after swap number  a = "<<a<<" b= "<<b<<endl;
    return 0;
    
}