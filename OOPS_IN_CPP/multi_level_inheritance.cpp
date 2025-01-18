#include<iostream>
using namespace std;
class teacher{
    protected:
     float salary;
    public:
    string name;
    string subject;
};

class students:public teacher{
    public:
    int rollno;
    int age;

};

class cricketer:public students {
 public:
 float average;
 int runs;

  cricketer(string name , string subject, int rollno, int age,float salary, float average){
        this->name = name;
         this->subject =subject;
          this->rollno = rollno;
           this->age = age;
            this->salary = salary;
            this->average = average;
        
        
    }

    void print(){
        cout<<"Name:"<<name<<endl;
         cout<<"subject:"<<subject<<endl;
          cout<<"Rollno:"<<rollno<<endl;
           cout<<"Age:"<<age<<endl;
           cout<<"Salary:"<<salary<<endl;
           cout<<"Average:"<<average<<endl;
    }

};
int main(){
    cricketer c1("Ankut prajapati", "science",24140100, 45, 45000, 45.7);
    c1.print();

    

  
}