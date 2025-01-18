#include<iostream>
using namespace std;
template<class x>
class Queue{
    private:
    x front ,rear;
    x *arr;
    x size;
    

    public:
    Queue(int size){
        front =rear =-1;
        arr = new x [size];
       this-> size =size;




    }

    bool empty(){
        return front == -1;
    }

    bool full(){
        return (rear+1)%size ==front;
    }

    void push(int value){
        if(full()){
            cout<<"stack is overflow"<<endl;
        }

        else if(empty()){
            front =rear =0;
            arr[0] = value;
            cout<<"pushed value is Queue"<<value<<endl;
        }

        else{
            rear =(rear+1)%size;
            arr[rear ] = value;
            cout<<"pushed value is Queue"<<value<<endl;
        }
    }

    void pop(){
        if(empty()){
            cout<<"stack is underflow"<<endl;
        }

        else{

         if(front ==rear){ 
            front =rear= - 1;
            cout<<"pop element is"<<front<<endl;
        }

        else{
            front =(front+1)%size;
            cout<<"pop element is"<<front<<endl;
        }
    }
    }

    int start(){
         if(front == -1){
            cout<<"Stack is empty"<<endl;
        }

        else{
            return arr[front];
        }
    }


};

int main(){
    Queue <int> q(5);
   
    q.push(3);
     q.push(3);
    
     q.push(3);
    
     q.push(3);
    
     q.push(3);
    
     q.push(3);

     q.pop();
    
    

}
