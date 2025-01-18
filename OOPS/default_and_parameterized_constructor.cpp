#include<iostream>
#include<string>
using namespace std;
class students{
    private:
    string name;
    string depart;
     long long rollno;
  public:
   // Default constructor
   students(){
    cout<<"I am default constructor"<<endl<<endl;
   }
   // parameterized constructor

   students(string name, string depart, long long rollno ){
     this->name = name;
     this->depart= depart;
     this->rollno = rollno;

   }

   void getinfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"department :"<<depart<<endl;
    cout<<"Rollno:"<<rollno<<endl;
   }

};
int main(){
    students s1;
    students s2("Ankit prajapati", "computer science", 2414010010017);
    s2.getinfo();
}