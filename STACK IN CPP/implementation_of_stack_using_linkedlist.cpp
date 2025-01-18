#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data = value;
        next = NULL;
    }


};

class stack{
    node*top;
    int size;
    public:
    stack( ){
        size = 0;
        top =NULL;
    }

    void push(int x){
        if(top == NULL){
            top =new node(x);
            cout<<"pushed element:"<<x<<endl;
            size++;
        }

        else{
            cout<<"pushed element:"<<x<<endl;
            node*temp =new node(x);
            temp ->next =top;
            top =temp;
            size++;
        }
    }

    void pop(){
        if(top == NULL){
            cout<<"stack underflow\n";
        }

        else{
            cout<<"pop element:"<<top->data<<endl;
            node*temp2 = top;
          top =  top->next;
          delete temp2;
          size--;
        }
    }

    int peek(){
       if(top == NULL){
            cout<<"stack empty";
            return -1;
        } 

        else{
            return top->data;
        }
    }

    bool empty(){
        return top==NULL;
    }

    int issize(){
        return size;
    }



};
int main(){
      stack s1;
      s1.push(6);
      s1.push(9);
      s1.push(-6);
      s1.push(5);
       s1.pop();

    
    cout<<s1.empty()<<endl;
    cout<<s1.issize()<<endl;
    cout<<s1.peek()<<endl;
     cout<<s1.peek()<<endl;

}