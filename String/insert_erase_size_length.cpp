#include<iostream>
#include<string>
using namespace std;
int main(){
    string s= "anit";
    string p= "prajapatia";
    s.insert(s.begin()+2,'k');
    cout<<s<<endl;
    p.erase(p.begin()+9);
    cout<<p<<endl;
    cout<<s.size()<<endl;
    cout<<p.length()<<endl;

}