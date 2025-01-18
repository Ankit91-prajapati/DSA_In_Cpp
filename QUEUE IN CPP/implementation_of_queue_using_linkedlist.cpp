#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int value){
      data =value;
      next =NULL;
    }

};
class queue{
    node *front, *rear;
    int size;
    public:
    queue(){
        front =rear =NULL;
        size =1;
    }

    bool empty(){
        return front ==NULL;
    }

    void push(int value){
      if(empty()){
        front = rear = new node(value);
      }

      else{
        node*temp = front;
        rear->next = new node(value);
        rear =rear->next;
        size++;
      }

    }

    void pop(){
      if(empty()){
        cout<<"Stack underflow\n";
      }

      else{
        node*temp = front;
       front = front->next ;
       delete temp;
       size--;
      }
    }

    int start(){
      if(front ==NULL){
        cout<<"Queue is empty";
        return -1;
      }
      else{ 
      return front->data;
    }
    }

    int issize(){
      return size;


    }



};
using namespace std;
int main(){
  queue q1;
    q1.push(3);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.pop();
    q1.pop();

    cout<<q1.empty()<<endl;
    cout<<q1.issize()<<endl;
    cout<<q1.start()<<endl;
    

}

