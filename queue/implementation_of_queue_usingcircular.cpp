#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front,rear;
    int size;
    public:
    Queue(int s){
        arr = new int[s];
        front  = rear =-1;
        size =s;
    }
   bool isempty(){
    return front == -1;
   }

   bool isfull(){
    return (rear+1)%size ==front;
   }

   void push(int x){
    if(isempty()){
        front = rear = 0;
        cout<<"pushed element is"<<x<<endl;
        arr[0] = x;
    }

    else if(isfull()){
        cout<<"queue is over flow\n";
    }
   

   else{
    
        
       rear =(rear+1)%size;
       arr[rear] =x;

     cout<<"pushed element is"<<x<<endl;
   }
   }

   void pop(){
    if(isempty()){
        cout<<"queue is under flow\n";
    }

    
        else{
        if(front ==rear){
            
            front = rear =-1;
        }

        else{
            cout<<"pop"<<arr[front]<<"in"<<endl;
            front =(front+1) %size;

        }
    }

    }

    int start() {
        if(isempty()){
            cout<<"empty\n";
            return -1;
        }

        else{
            return arr[front];
        }
    }

    int issize(){
        return rear+1;
    }


};
int main(){
    Queue  q1(5);
  q1.push(3);
  q1.push(4);
  q1.pop();
 q1.push(4);
 q1.push(6);
 q1.push(7);
  q1.push(7);
  
 cout<< q1.issize()<<endl;
 cout<< q1.isempty()<<endl;
 cout<< q1.start()<<endl;
  
  






}
