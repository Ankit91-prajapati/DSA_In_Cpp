#include<iostream>
#include<string>
using namespace std;
int main(){
   string name;
   cout<<"Enter string :";
   getline(cin,name);
   name.pop_back();
  cout<<name<<endl;
  name.push_back('t');
  cout<<name<<endl;

  cout<<name.append(" praj")<<endl;
   
}