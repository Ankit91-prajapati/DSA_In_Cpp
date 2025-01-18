#include<iostream>
#include<string >
using namespace std;
class students{
    public:
  string name;
  int roll_no;
  double * cgpaptr;


//parameterized constructor
  students(string name ,int roll_no , double cgpa){
    this->name=name;
    this->roll_no = roll_no; 
    cgpaptr = new double; 
    *cgpaptr =cgpa; 
  }
   //custom copy constructor
  students(students &obj){
    this->name = obj.name;
    this->roll_no = obj.roll_no;
    cgpaptr = new double; 
    *cgpaptr = *(obj.cgpaptr);
  }

  void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"cgpa: "<<*cgpaptr<<endl;
  }



};
int main(){
    students s1("ankit", 2345, 9.0 );
    s1.getinfo();
    students s2(s1);
    s2.name = "Ankur";
    *(s2.cgpaptr)=8;
    s2.getinfo();
  

}