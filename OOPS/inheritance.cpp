#include<iostream>
#include<string>
using namespace std;
class teacher{
  public:
    string name ;
    string subject;
    string depart;
    double salary ;
   
teacher(){
    cout<<"parent constructor"<<endl;
}
};


class student{
    
     public:
   int roll_no  ;
    
    student(){
  cout<<"child constructor"<<endl;
    }
    

};

// //multi_level_inheritance
// class person:public student{
//   public:
//   int age;
// person(string name,string subject, int roll_no, int age){   
//      this->name = name;
//       this->subject = subject;
//        this->roll_no =roll_no;
//         this->age =age;

// }
// void getinfo(){
//   cout<<"Name:"<<name<<endl;
//   cout<<"subject:"<<subject<<endl;
//   cout<<"Roll_no:"<<roll_no<<endl;
//   cout<<"Age:"<<age<<endl;
// }


// };
  //multiple inheritance
class child :public teacher,public student{
public:
 child( string name, int roll_no){

   this->name = name;
   this->roll_no =roll_no;
 }

};


int main(){
    
    
// student s1;
// s1. getinfo ( "ankit","c++","computer science",25000,2345);
//  person p1("Ankit","cpp",2344,12);
//  p1.getinfo();

 child c1("Ankit",14122);

}