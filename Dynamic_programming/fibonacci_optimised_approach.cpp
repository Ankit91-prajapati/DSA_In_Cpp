#include<iostream>
using namespace std;
//time complexity O(n)
//space complexity O(1)
int main(){
    int n;
    cout<<"Enter term:";
    cin>>n;
    int pre2 =0,pre=1,curr;
    for(int i =n; i>=2;i++){
        curr =pre+pre2;
        pre2 =pre;
        pre =curr;
    }
    cout<<"The value of "<<n<<" term is "<<curr<<endl;
    return 0;
    
}