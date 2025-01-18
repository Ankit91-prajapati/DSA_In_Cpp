#include<iostream>
using namespace std;
int main(){
   int n;
     cout<<"Enter last number:";
    cin>>n;
//     cout<<"print all even number between 1 to"<<n<<endl;

//     for(int i=1; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }

//     return 0;
// }
     //second method
cout<<"printing all even number between 1 to "<<n<<endl;

for(int a=2; a<=n; a=a+2){  //a+=2
    cout<<a<<endl;
}

return 0;
}