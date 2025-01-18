#include<iostream>
using namespace std;
class Queue{
    int front;
    int rear;
    int*arr;
    int size;
    public:
    Queue(int size){
        front =rear= -1;
        this->size =size;
        arr= new int[size] ;
    }
    bool full(){
        return (rear+1)%size == front;
    }

    bool empty(){
        return front ==-1;
    }

    void push(int value){
   if(front ==-1){
    front = rear = 0;
    cout<<"pushed "<<value<<endl;
    arr[0] =value;
   }

  else if(full()){
    cout<<"Queue is overflow\n";
  }

  else{
    rear =rear+1%size;
      cout<<"pushed "<<value<<endl;
    arr[rear] = value;
  }

    }

    void pop(){
        if(empty()){
            cout<<"Queue is underflow\n";
        }

        else if(front == rear){
            cout<<"pop"<<arr[front]<<endl;
            front = rear =-1;
        }

        else{
             cout<<"pop"<<arr[front]<<endl;
            front = (front+1)%size;
        }
    }

    int start(){
        if(front ==-1){
            cout<<"Queue is empty";
            return -1;
        }

        else{
            return arr[front];
        }
    }


};
int main(){

    Queue q1(5);
    q1.push(3);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.pop();
    q1.pop();

    cout<<q1.empty()<<endl;

      cout<<q1.full()<<endl;
       cout<<q1.start()<<endl;
    

}