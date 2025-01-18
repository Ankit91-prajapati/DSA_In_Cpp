#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to print line: ";
    cin>>n;
    int i=1;
    while(i<=n){
      int j=1;
        while(j<=n){
            if(i==1 or i==n or i==j or i+j==n+1){
                cout<<" * ";
            }
             else{
                cout<<"   ";
             }
             j++;
        }
          cout<<endl;
          i++;
    }
    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number to print line: ";
//     cin>>n;
//     int i=1;
//     do{
//       int j=1;
//         do{
//             if(i==1 or i==n or i==j or i+j==n+1){
//                 cout<<" * ";
//             }
//              else{
//                 cout<<"   ";
//              }
//              j++;
//         }while(j<=n);
//           cout<<endl;
//           i++;
//     }while(i<=n);
//     return  0;
// }
