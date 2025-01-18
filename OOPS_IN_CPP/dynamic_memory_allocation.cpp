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

cricketer *c1 = new cricketer("Rohit sharma", 5000, 45 ,39);
c1->print();
cout<<"Name :"<<c1->name<<endl;
     cout<<"runs :"<<c1->runs<<endl;
      cout<<"Name :"<<c1->average<<endl;
      cout<<"age:"<<c1->age <<endl;
}