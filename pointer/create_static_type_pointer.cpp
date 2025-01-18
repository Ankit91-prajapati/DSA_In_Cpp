#include<iostream>
using namespace std;
int main(){
    int a =3;
    int **p;
   int *j;  //*j = &a
   j = &a;
    p = &j;
    cout<< "value of a "<<a<<endl;
      cout<< "addresss of a "<<(&a)<<endl;
        cout<< " address of a "<<j<<endl;
         cout<< "value of a "<<*j<<endl;
           cout<< "address of j "<<(&j)<<endl;
             cout<< "address of j "<<p<<endl;
              cout<< "address of a "<<*p<<endl;
               cout<< "value of a "<<**p<<endl;
                cout<< "value of a "<<*(&a)<<endl;
                  cout<< "address of p "<<(&p)<<endl;
                    cout<< "value of j "<<**(&p)<<endl;
}