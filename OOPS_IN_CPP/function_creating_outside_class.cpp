#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    float height;
     
    void updatevalue(string name,int age ,float height){
        this->name = name;
         this->age = age;
         this->height = height;
    }
        
};

class cars{
    private:
    int milege;
    public:
    string name;
    int  model;


    void setdata( int milege){
        this->milege = milege;
    }
    
    int getdata(){
        return milege;
    }

};

void print( person p1){
    cout<<"Name:"<<p1.name<<endl;
     cout<<"age:"<<p1.age<<endl;
      cout<<"Height:"<<p1.height<<endl;

}

void change(person &c1){
    c1.age =20;
}

int main(){
    person p1;
    p1.name ="Ankit prajapati";
    p1.age = 19;
    p1.height =5.9;
    print(p1);

    change (p1);

     print(p1);

     p1.updatevalue("Ankit prajapati", 21, 5.11);

     print (p1);

     cars c1;
     c1.name = "tata";
     c1.model  = 2345;
     c1.setdata(70);
     cout<<c1.getdata()<<endl;







}
