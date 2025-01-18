#include<iostream>
using namespace std;
class teacher{
    protected:
     float salary;
    public:
    string name;
    string subject;
};

class students{
    public:
    int rollno;
    int age;

};

class cricketer:public teacher,public students {
 public:
 float average;
 int runs;


  cricketer(string name , string subject, int rollno, int age,float salary,int runs){
        this->name = name;
         this->subject =subject;
          this->rollno = rollno;
           this->age = age;
            this->salary = salary;
             this->runs =runs;
        
    }

    void print(){
        cout<<"Name:"<<name<<endl;
         cout<<"subject:"<<subject<<endl;
          cout<<"Rollno:"<<rollno<<endl;
           cout<<"Age:"<<age<<endl;
           cout<<"Salary:"<<salary<<endl;
           cout<<"Runs:"<<runs<<endl;
    }


};
int main(){
    cricketer c1("Ankut prajapati", "science",24140100, 45, 20000, 14000);
    c1.print();

}