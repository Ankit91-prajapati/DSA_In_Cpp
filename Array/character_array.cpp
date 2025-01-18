#include<iostream>
using namespace std;
int main(){
    char ch[] ={ 'a','n','k','i','t','\0'};
    // for(int i=0; ch[i]!='\0';i++){
    //     cout<<ch[i];
    // }
          //method-2
    // for(int i=0; ch[i]>'\0';i++){
    //     cout<<ch[i];
    // }

    //method-3
    int n=sizeof(ch)/sizeof (ch[0]);
    for(int i=0; i<n;i++){
        cout<<ch[i];
    }
}