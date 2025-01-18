#include<iostream>
using namespace std;
int main(){
   int n;
     cout<<"Enter last number:";
    cin>>n;
    cout<<"print odd even number between 1 to"<<n<<endl;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }

    return 0;
}

// cout<<"printing all Odd number between 1 to "<<n<<endl;

// for(int a=1; a<=n; a=a+2){  //a+=2
//     cout<<a<<endl;
// }

// return 0;
// }