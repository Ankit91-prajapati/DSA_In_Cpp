#include<iostream>
#include<string> 
using namespace std;
class teacher{
    public:
    string name;
    string subject;
    string department;
    double salary;
   void changedepart(string d){
     department =d;
   }
};
int main(){
    teacher t1;
    t1.name=" Ankit prajapati";
    t1.subject =" cpp";
    t1.department =" it department";
    t1.salary = 25000;
    cout<<"Name:"<<t1.name<<endl;
    cout<<"subject:"<<t1.subject<<endl;
   // cout<<"Department:"<<t1.department<<endl;
     cout<<"salary:"<<t1.salary<<endl;
    
    t1.changedepart("computer department");
     cout<<"Department:"<<t1.department<<endl;

      cout<<"---------------------------\n";
    teacher t2;
    t2.name=" Ankur prajapati";
    t2.subject =" bio";
    t2.department =" biotechnical";
    t2.salary = 23000;
    cout<<"Name:"<<t2.name<<endl;
    cout<<"subject:"<<t2.subject<<endl;
    cout<<"Department:"<<t2.department<<endl;
     cout<<"salary:"<<t2.salary<<endl;




return 0;
}