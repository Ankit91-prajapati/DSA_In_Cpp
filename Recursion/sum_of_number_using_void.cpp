// #include<iostream>
// using namespace std;
// void sum(int a , int s,int n){
    
//     if(a>n){ 
//     cout<<s<<endl;
//      return ;
//      }
//      sum (a+1, s+a,n );

// }
// int main(){
//     int n;
//     cout<<"Enter n :";
//     cin>>n;
//     sum(1 ,0 ,n);
// }

#include<iostream>
using namespace std;
void sum(int n , int s){
    
    if(n==0){ 
    cout<<s<<endl;
     return ;
     }
     sum (n-1 ,s+n);

}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    sum( n ,0);
}