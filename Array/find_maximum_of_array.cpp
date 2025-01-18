// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,6,100,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"maximum array ="<<max<<endl;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[]={100,3,6,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int mx=INT32_MIN;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        }
    
    cout<<"maximum array ="<<mx<<endl;
}