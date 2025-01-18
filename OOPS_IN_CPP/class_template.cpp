#include<iostream>
using namespace std;
template<class  x>
class maximum{
    private:
    x num1;
    x num2;
    public:
    maximum(x n1 ,x n2){
        num1 = n1;
        num2 = n2;
    }

    void check(){
        if(num1>num2){
            cout<<num1<<" is maximum number"<<endl;
        }

        else{
            cout<<num2<<" is maximum number"<<endl;
        }
    }

    

};
int main(){
    
    maximum<float> max(6.5,5) ; 
    max.check();

}
