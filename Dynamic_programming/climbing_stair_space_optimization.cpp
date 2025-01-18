#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number stairs to climb:";
//     cin>>n;
//     int curr, next =1, next2 =0;
//     for(int i= n-1; i>=0; i--){
//         curr = next+next2;
//         next2 =next;
//         next =curr;

//     }
//     cout<<"there is a different ways to climb stairs "<<curr;
//     return 0;
// }

int main(){
    int n;
    cout<<"Enter number stairs to climb:";
    cin>>n;
    int curr, pre =1, pre2 =1;
    for(int i= 2; i<=n; i++){
        curr = pre+pre2;
        pre2 =pre;
        pre = curr;

    }
    cout<<"there is a different ways to climb stairs "<<curr;
    return 0;
}



