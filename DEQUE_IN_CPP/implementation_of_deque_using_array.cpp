#include<iostream>
using namespace std;
class deque{
    int front;
    int rear;
    int *arr;
    int size;
   public:
    deque(int s){
        size = s;
        front = rear = -1;
        arr = new int[s];
    }

    bool full(){
        return rear+1%size == front;
    }

    bool empty(){
        return front == -1;
    }

    void push_front(int x){
        if(front == -1){
            front = rear = 0;
            arr[0] = x;
             cout<<"push_front"<<x<<endl;
        }

        else if(full()){
         cout<<"deque is overflow\n";
        }

        else{
            front = (front-1+size)%size;
            arr[front] = x;
            cout<<"push_front"<<x<<endl;
        }
    }

    void push_back(int x){
        if(front == -1){
            front = rear = 0;
            arr[0] = x;
            cout<<"push_back"<<x<<endl;
        }

        else if(full()){
         cout<<"deque is overflow\n";
        }

        else{
            rear = (rear+1)%size;
            arr[rear] = x;
            cout<<"push_back "<<x<<endl;
        }
    }

    void pop_front(){
         if(front == -1){
            cout<<"deque underflow\n";
        }

        else if(front ==rear){
         front =rear =-1;
        }

        else{
             cout<<"pop_front"<<arr[front]<<endl;
            front = (front+1)%size;
        }
    }
    
     void pop_back(){
         if(front == -1){
            cout<<"deque underflow\n";
        }

        else if(front ==rear){
         front =rear =-1;
        }

        else{
              cout<<"pop_front"<<arr[rear]<<endl;
            rear = (rear-1)%size;
        }
    }

    int start(){
         if(front == -1){
            cout<<" deue is empty";
            return -1;
        }

        else{
            return arr[front];
        }

    }


    int end(){
         if(front == -1){
            cout<<" deue is empty";
            return -1;
        }

        else{
            return arr[rear];
        }

    }

   


};
int main(){
    deque d1(5);
    d1.push_front(6);
    d1.push_front(5);
     d1.pop_front();
      d1.push_front(3);
       d1.push_back(2);
       d1.push_back(8);
        d1.pop_back();

        cout<<d1.empty()<<endl;
         cout<<d1.end()<<endl;
          cout<<d1.start()<<endl;
          cout<<d1.full()<<endl;
         







}
