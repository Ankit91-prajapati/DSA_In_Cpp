#include<iostream>
using namespace std;
class stack{
    
    int *arr;
    int size;
    int top;

     public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr =new int[s];
         
    }


    void push(int value){
        if(top==size-1){
            cout<<"stack overflow\n ";
           return;
        }

        else{
            top++;
            arr[top] = value;
            cout<<"push "<<value<<"\n";
        
        }


    }

    void pop(){
        if(top ==-1){
            
            cout<<"stack under flow "<<endl;
            
        }

        else{
            cout<<"pop "<<arr[top]<<endl;
            top--;
            
            
        }
    }

    int peek(){
      if(top ==-1){
            cout<<"stack empty"<<endl;
       return -1;
    }

    else{
        return arr[top];
    }
    }

     bool empty() {
         return top ==-1;
      
    }
     //we cannot use same type varaible in function name and data member variable name
    int issize(){
        return top+1;
    }


};
int main(){
 stack  s(5);
 s.push(5);
 s.push(7);
 s.push(9);
 s.push(8);
 s.pop();
 cout<<s.empty()<<endl;
 cout<<s.issize()<<endl;
 cout<<s.peek()<<endl;
 






 


}
