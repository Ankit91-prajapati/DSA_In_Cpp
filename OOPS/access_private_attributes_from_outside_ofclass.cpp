 #include<iostream>
#include<string> 
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    string subject;
    string department;
    
   void changedepart(string d){
     department =d;
   }

   void setsalary(double salary){
    this->salary =salary;
   }

   double getsalary(){
    return salary;
   }
};
int main(){
    teacher t1;
    t1.name=" Ankit prajapati";
    t1.subject =" cpp";
    cout<<"Name:"<<t1.name<<endl;
    cout<<"subject:"<<t1.subject<<endl;

    t1.changedepart("computer department");
     cout<<"Department:"<<t1.department<<endl;
     
     
    t1.setsalary( 250000);
     
    cout<<"salary:" <<t1.getsalary()<<endl;



   return 0; 
}