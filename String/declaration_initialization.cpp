#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name ="Ankit prajapati";
    string n("Ankit prajapati");
    char ch[] = "Ankur prajapati";
    
    cout<<name<<endl;
    
    cout<<n<<endl;

    for(int i=0 ;ch[i]!= '\0'; i++){
        cout<<ch[i];
    }
    cout<<endl;

    reverse(n.begin(),n.end());
    cout<<n<<endl;
}