
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

};


class batsmen:public cricketer{
    public:
int career;
 batsmen(string name , string subject, int rollno, int age,float salary, float average){
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
    batsmen b1("Ram ji", "sst",2414, 40, 30000,45.8);
    b1.print();
    
}

