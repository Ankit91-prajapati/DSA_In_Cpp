#include<iostream>
using namespace std;
class teacher{
    private:
    int code;
    protected:
     float salary;
    public:
    string name;
    string subject;
    teacher(){
        cout<<"i am parent class";
    }
};

class students:public teacher{
    public:
    int rollno;
    int age;
    students(string name , string subject, int rollno, int age ){
        this->name = name;
         this->subject =subject;
          this->rollno = rollno;
           this->age = age;
        
        
    }

    void print(){
        cout<<"Name:"<<name<<endl;
         cout<<"subject:"<<subject<<endl;
          cout<<"Rollno:"<<rollno<<endl;
           cout<<"Age:"<<age<<endl;
    }

};
int main(){
    students s1("Ankit prajapati", "Math", 24140100, 20);
    s1.print();


}