#include<iostream>
#include<string>
using namespace std;
class students{
    private:
    string name;
    string depart;
     long long rollno;
  
   public:
   // parameterized constructor

   students(string name, string depart, long long rollno ){
     this->name = name;
     this->depart= depart;
     this->rollno = rollno;

   }
   students( students &obj){   
     this-> name = obj.name;
     this->depart= obj.depart;
     obj.rollno = 23455;
      this->rollno = obj.rollno;
   }

   void getinfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"department :"<<depart<<endl;
    cout<<"Rollno:"<<rollno<<endl;
   }

};
int main(){
    
    students s1("Ankit prajapati", "computer science", 2414010010017);
    s1.getinfo();
    cout<<"______________________\n";
    students s2(s1);
     s2.getinfo();
     cout<<"______________________\n";
     s1.getinfo();
}