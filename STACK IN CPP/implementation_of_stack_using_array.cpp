#include<iostream>
using namespace std;
class stack{
    int top;
    int *arr;
    int size;
    public:
    stack( int size){
        top = -1;
        arr =new int[size];
        this->size = size;
    }

    void push( int value){
        if(top ==size-1){
            cout<<"stack overflow\n";
        }

        else{
            top++;
            arr[top]  = value;
            cout<<"pushed top:"<<value<<endl;
        }
    }


    void pop(){
        if(top == -1){
            cout<<"stack underflow\n";
        }

        else{
          
         cout<<"pop top:"<<arr[top]<<endl;
         top--;
        }
    }

    bool empty()
    { 
        return top == -1;
    }


    int peek(){  
        if(top ==-1){
            
            cout<<"stack is empty";
            return -1;
        }
    
    else{
        return arr[top];
    }

    }


    int issize(){
        return top+1;
    }


};
int main(){
    stack s1(5);

    
    cout<<s1.empty()<<endl;
    cout<<s1.issize()<<endl;
    cout<<s1.peek()<<endl;
     cout<<s1.peek()<<endl;
    


}