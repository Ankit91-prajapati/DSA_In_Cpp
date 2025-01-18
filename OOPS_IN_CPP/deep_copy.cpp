#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    double average;
    int *age;

cricketer(string n ,int r ,float aver ,int a){
        name =  n;
         runs =  r;
        average  = aver;
        age = new int;
        *age = a;

}
//custom copy constructor
cricketer(cricketer &x1){
this->name = x1.name;
this->runs = x1.runs;
this->average = x1.average;
age = new int;
*age = *(x1.age);
*age = 50;



}

    void print (){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Average:"<<average<<endl;
        cout<<"Age:"<<*age<<endl;
    }

    

    
};
int main(){
    cricketer x1("Rohit", 3000,56.7,39);
   x1.print();

   cricketer x2 (x1);
   x2.print();

   x1.print();
}
