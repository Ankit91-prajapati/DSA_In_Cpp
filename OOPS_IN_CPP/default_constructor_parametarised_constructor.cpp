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
   cricketer(){
       cout<<"I am a default contructor"<<endl;
   }

cricketer(string name ,int runs ,float average ,int age){
     this->name = name;
        this->runs =runs;
        this->average = average;
        this->age =age;

}


cricketer(string name ,int runs ,int age){
     this->name = name;
        this->runs =runs;
        this->age =age;

}


cricketer(string name ,int runs ,double average ,int age){
     this->name = name;
        this->runs =runs;
        this->average = average;
        this->age =age;

}

cricketer(int runs ,double average ,int age,string name ){
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
cricketer c2;
c2.name = " rohit sharma";
c2.runs = 20000;
c2.average = 67.8;
c2.age = 38;
c2.print();

cout<<"\n_______________________\n";

cricketer c3("virat",200080,35);
c3.print();

cout<<"\n_______________________\n";

cricketer c4("ankur", 15000,45.69,19);
c4.print();

cout<<"\n_______________________\n";

cricketer c5(40000,45.69,19,"ankut");
c5.print();



return 0;

}