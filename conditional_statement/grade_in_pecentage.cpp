#include<iostream>
using namespace std;
int main(){
    float math,science,english,hindi,sst;
    cout<<"Enter marks of math:";
    cin>>math;
    cout<<"Enter marks of science:";
    cin>>science;
    cout<<"Enter marks of english:";
    cin>>english;
    cout<<"Enter marks of hindi:";
    cin>>hindi;
    cout<<"Enter marks of sst:";
    cin>>sst;
    float percent=(math+science+english+hindi+sst)/500*100;
    cout<<"percent= "<<percent<<"%"<<endl;

    if(percent>=90){
        cout<<"first division";
    }


    else if(percent>=65){
        cout<<"second division";
    }

    else if(percent>=40){
        cout<<"third division";

    }

    else{
        cout<<"fail";
    }

}