#include<iostream>
using namespace std;
class deque{
    int front ,rear;
    int *arr;
    int size;
  public:
    deque(int s){
        front =rear =-1;
        size =s;
        arr = new int[s];
    }

    bool empty(){
        return front == -1;
    }

    bool full(){
        return (rear+1)%size ==front;
    }

    void push_front(int x){
        if(empty()){
            front =rear =0;
            cout<<"pushed_front"<<x<<endl;
             arr[0] =x;
        }

        else if(full() ){
        cout<<"deque overflow\n";
        }


        else{
             
            front = (front-1+size) %size ;
            arr[front] =x;
            cout<<"pushed_front"<<x<<endl;
        }
    }

    void push_end(int x){
        if(empty()){
             
            front =rear =0;
            cout<<"pushed_end"<<x<<endl;
             arr[0] =x;
        }

        else if(full() ){
        cout<<"deque overflow\n";
        }
       
        else{
             
            rear = (rear+1) %size;
            arr[rear] =x;
            cout<<"pushed_end"<<x<<endl;
        }
    }


   

void pop_front(){
        if(empty()){
            cout<<"deque underflow\n";   
        }

        
else if(front ==rear){
    front =rear =-1;
}

        else{
             cout<<"pop_front"<<arr[front]<<endl;
            front = (front+1) %size ;
            
        }
    }

    void pop_end(){
        
            if(empty()){
            cout<<"deque underflow\n";   
        }
             
        
       else if(front ==rear){
    front =rear =-1;
}

        else{
            cout<<"pop_end"<<arr[rear]<<endl;
            rear = (rear-1+size) %size;
            
        }
    }

     int start(){
        return arr[front];

    }

    int end(){
        return  arr[rear];
    }




};
int main(){

    deque q1(5);
    q1.push_front(5);
    q1.push_front(4);
   q1.push_front(-1);

q1.push_end(8);

q1.pop_front();

q1.pop_end();

cout<<q1.empty()<<endl;
cout<<q1.start()<<endl;
cout<<q1.end()<<endl;
cout<<q1.full()<<endl;


}