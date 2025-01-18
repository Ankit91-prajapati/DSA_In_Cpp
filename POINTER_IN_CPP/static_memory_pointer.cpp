#include<iostream>
using namespace std;
int main(){
    int a = 45;
    int *ptr;
    ptr = &a;
   
    int **ptr2;
    ptr2 = &ptr;


    cout<<"value of a = "<<a<<endl;

     *ptr =56;
   cout<<"value of a = "<<a<<endl;
    cout<<"value of a = "<<*(&a)<<endl;
      cout<<"address of a = "<<&a<<endl;
        cout<<"value of ptr = "<<ptr<<endl;
          cout<<"address of a = "<<ptr<<endl;
            cout<< "value of a = "<<*ptr<<endl;
             cout<<"address of ptr = "<<&ptr<<endl;
               cout<<"address of ptr = "<<ptr2<<endl;
                 cout<<"address  of a = "<<*ptr2<<endl;
                   cout<<"address of ptr2 = "<<&ptr2<<endl;
                      cout<<"value of a ="<<**ptr2<<endl;
         
          

         


}