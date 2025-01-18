#include<iostream>
using namespace std;
int main(){

    //integer type value stored
short a=23445;
int a1=-234455;
unsigned int a2=345456u;
long a3=2345l;
long long large=12344556LL;

    //character type value stored
 int ch='a';
 char cho = '@';
unsigned char c1='%';

    //boolean
bool t=(5==5);

//for storing decimal value

float deci=45678;
double decimal= 4566.789;
long double exp= 345.6e2;

//string value
 string name = "ankit prajapati" ;

 string n("ankur prajapati");
 string multiline = R"(i am Ankit my 
profession is it field)";

 string multi = "suraj do you thing who is best programmer\n"
 "not i am not thinking about this";

 //for using array
 char cha[] = "vivek prajapati";

 cout<<"short integer  "<<a<<endl;
 cout<<"integer value  "<<a1<<endl;
 cout<<"unsigned integer "<<a2<<endl;
 cout<<"long integer value "<<a3<<endl;
 cout<<"long long  integer "<<large<<endl;

 cout<<"character "<<ch<<endl;
 cout<<"unsigned char "<<c1<<endl;

 cout<<"boolean  "<<t<<endl;

 cout<<"float "<<deci<<endl;
 cout<<"double "<<decimal<<endl;
 cout<<"long double "<<exp<<endl;

cout<<"string "<<name<<endl;
cout<<"string "<<n<<endl;
cout<<multiline<<endl;
cout<<multi<<endl;


for(int  i=0 ; cha[i]!='\0'; i++){
    cout<<cha[i];
}

cout<<"\n________________________________________"<<endl;

cout<<"short integer  "<<sizeof (short)<<endl;
 cout<<"integer value  "<< sizeof (a1)<<endl;
 cout<<"unsigned integer "<<sizeof a2<<endl;
 cout<<"long integer value "<<sizeof a3<<endl;
 cout<<"long long  integer "<<sizeof large<<endl;

 cout<<"character "<<sizeof ch<<endl;
 cout<<"unsigned char "<<sizeof c1<<endl;

 cout<<"boolean  "<<sizeof t<<endl;

 cout<<"float "<<sizeof (deci)<<endl;
 cout<<"double "<<sizeof decimal<<endl;
 cout<<"long double "<<sizeof exp<<endl;

cout<<"string "<<sizeof name<<endl;
cout<<"string "<<sizeof n<<endl;

  cout<<sizeof cha;


return 0;

}