#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    double average;
    int age;

cricketer(string name ,int runs ,float average ,int age){
     this->name = name;
        this->runs =runs;
        this->average = average;
        this->age =age;

}
    void print (){
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"Average:"<<average<<endl;
        cout<<"Age:"<<age<<endl;
    }
    
};

int main(){
cricketer c1("ankit", 1500,45.6,19);
c1.print();
cricketer *ptr = &c1;
ptr->print();
}