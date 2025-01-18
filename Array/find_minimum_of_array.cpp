// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,6,-1,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int min=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"minimum array ="<<min<<endl;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[]={-12,3,6,-11,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mn=__INT_MAX__;
    for(int i=0;i<n;i++){
     mn=min(mn,arr[i]);       
    }
  cout<<"minimum array ="<<mn<<endl;

    return 0;
}


