#include<iostream>
using namespace std;
void brazil(){
    cout<<"i am in brazil"<<endl;
    return;

}

void usa(){
    cout<<"i am in usa"<<endl;
    brazil();
    return;
}

 void india(){
    cout<<"i am in  india"<<endl;
    usa();
    return;
 }
int main(){
    cout<<"i am in main"<<endl;
  india();
  return 0;
}