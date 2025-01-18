#include<iostream>
using namespace std;
class loading{
    public:

    void sum(int a , int b){
      cout<<"sum:"<<a+b<<endl;
    }

    void sum(double a , double b){
        cout<<"sum:"<<a+b<<endl;
    }


    void sum (int a, int b, int c){
        cout<<"sum:"<<a+b+c<<endl;
    }

};
int main(){
    loading L1;
    L1.sum(4,6);
    loading L2;
    L2.sum (4.5,6.7);


}