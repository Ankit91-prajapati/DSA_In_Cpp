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
cout<<"\n_______________________\n";
//copy of c1 not actual value
cricketer c2(c1);
c2.age =30;
c2.print();
cout<<"\n_______________________\n";
c1.print();

cout<<"\n_______________________\n";
cricketer c3 = c2;
c3.average = 65;

c3.print();
cout<<"\n_______________________\n";
c2.print();
//copy actual address
cricketer *c4 (&c3);
c4->name = "raj"; //(*c4).name
c4->print();
cout<<"\n_______________________\n";
c3.print();

cricketer c5("Rohit", 3000,56.7,39);
c5.print();

return 0;
}