#include<iostream>
using namespace std;
int main(){
    int *ptr = new int(4);
    
    double *ptr1;
   ptr1  =  new double;

   *ptr1 =  45.7;
 
 string *n;
 n = new string;
 *n ="ankit";

 cout<<"value of *ptr  = "<<*ptr<<endl;
  cout<<"address of  heap memory ptr  = "<< ptr<<endl;
   cout<<" address of ptr  = "<< (&ptr)<<endl;
    cout<<"value of *ptr1  = "<<*ptr1<<endl;
     cout<<" address of heap memory ptr1  = "<< ptr1<<endl;
      cout<<"address of ptr1  = "<<&ptr1<<endl;
       cout<<"value of *n ="<<*n<<endl;
        cout<<"address of heap memory = " << n<<endl;
         cout<<"address of n ="<<&n<<endl;


    
}