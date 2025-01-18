#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>L1 = {2,3,4,5,6};
    list<int>L2({56,67,89,90});
    list<int>L3(2,34);
    int n;
    cout<<"Enter size:";
    cin>>n;
    list<int>L4(n);

  for(int &val: L4){
    cin>>val;
  }
  L1 =L4;
  

    
    for(const int & val:L1){
        cout<<val<<" ";
    }
    cout<<endl;

    for( int & val:L2){
        cout<<val<<" ";
    }
    cout<<endl;

    for( int  val:L3){
        cout<<val<<" ";
    }
    cout<<endl;

    for(int x: L4){
        cout<<x<<" ";
    }
    cout<<endl;

    

}