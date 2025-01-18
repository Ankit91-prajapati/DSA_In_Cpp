#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first number:";
    cin>>x;
    cout<<"Enter second number:";
    cin>>y;
    cout<<"Enter third number:";
    cin>>z;

    if(x>y){
        if(x>z){
            cout<<x<<" is greatest number";
        }
        else{
            cout<<z<<" is greatest number";
        }
    }

    if(y>x){
        if(y>z){
            cout<<y<<" is greatest number";
        }

        else{
            cout<<z<<" is greatest number";
        }

    }



    return 0;

    
 }

// int x,y,z;
//     cout<<"Enter first number:";
//     cin>>x;
//     cout<<"Enter second number:";
//     cin>>y;
//     cout<<"Enter third number:";
//     cin>>z;

//     if(x>y){
//         if(x>z){
//             cout<<x<<" is greatest number";
//         }
//         else{
//             cout<<z<<" is greatest number";
//         }
//     }

//     else{  //y>x
//         if(y>z){
//             cout<<y<<" is greatest number";
//         }

//         else{
//             cout<<z<<"is greatest number";
//         }

//     }

//  return 0;

    
// }