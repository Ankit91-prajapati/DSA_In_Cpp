#include<iostream>
using namespace std;
class node{
     public:
    int data;
    node*next;

    node(int value){
        data=value;
        next =NULL;
    }
};
class stack{
    
    node *top;
    int size;
     public:
    stack( ){
        
        top = NULL;
        size=0;
    }


    void push(int value){
        node*temp;
        
        temp = new node(value);
        if(temp==NULL){
           cout<<"stack overflow"<<endl;

        }
        else{  
        temp->next = top;
        top = temp;
        size++;
        }
    }
    void pop(){  
        
    
        if(top==NULL){
           cout<<"stack underflow"<<endl;
           return;}

           else{
            node*temp =top;
            cout<<"pop"<<top->data<<endl;
            top =top->next;
            delete temp;
            size--;
           }
    }

       int peek(){
        if(top==NULL){
            cout<<"Stack empty";
            return -1;
        }

        else{
            return top->data;
        }

       }

       bool empty(){
        return top== NULL;
       }

       int issize(){
        return size;
       }


};

    

int main(){
    stack s;
    s.push(6);
     s.push(8);
      s.push(9);
       s.push(9);
       cout<<s.empty()<<endl;
       cout<<s.peek()<<endl;
       s.pop();
       cout<<s.issize()<<endl;



}