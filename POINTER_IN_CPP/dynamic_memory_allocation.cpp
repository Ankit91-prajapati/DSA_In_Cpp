#include<iostream>
using namespace std;
int main(){
    int *ptr ;
    ptr = new int;
    *ptr = 100;

    float *ptr2 = new float (34.6);

    char ch;
    cout<<"Enter a character:";
     cin>>ch;
      char *ptr3 = new char (ch);

    cout<<"Address of  ptr pointer = "<< &ptr<<endl;
    cout<< "value of address = "<<*ptr<<endl;
    cout<<"Address  of heap which is  indicating pointer = "<<ptr<<endl;
    cout<<"Address of  ptr2 pointer = "<<&ptr2<<endl;
    cout<<"value od address = "<<*ptr2<<endl;
    cout<<"Address  of heap which is  indicating pointer = "<<ptr2<<endl;
    cout<< "value of address  = "<<*ptr3<<endl;
    cout<<"value = "<<ch<<endl;



string *ptr4 = new string;
*ptr4 = "ankit";
 string *ptr4 = new string("ankit");
cout<<"value of address = "<<*ptr4<<endl;

}
