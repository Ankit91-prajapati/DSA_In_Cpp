#include<iostream>
#include<string >
using namespace std;
class students{
    public:
  string name;
  int roll_no;
  double cgpa;
  //default contructor 
  students(){
     cout<<"i am default contructor"<<endl;
  }


//parameterized constructor
  students(string name ,int roll_no , double cgpa){
    this->name=name;
    this->roll_no = roll_no;
      
    this->cgpa =cgpa; 
  }

   ~students(){
 cout<<"I am destructor"<<endl;
  }

   void getinfo(){
    cout<<"name: "<<name<<endl;
    cout<<"Roll no: "<<roll_no<<endl;
    cout<<"cgpa: "<<cgpa<<endl;
  }

 


};
int main(){
    students s1("ankit", 2345, 9.0 );
    s1.getinfo();
    
    



}