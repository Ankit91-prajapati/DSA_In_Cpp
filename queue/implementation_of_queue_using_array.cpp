#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int size;
    int front ,rear;
    public:
    Queue(int s){
        arr =new int [s];
        front =-1,rear =-1;
        size =s;

    }

 bool isempty(){
    return front ==-1;
 }

bool isfull(){
  return rear ==size-1;
}

void push(int x){

    if(isempty()){
        cout<<"pushed"<<x<<"in"<<endl;
        front = rear = 0;
        arr[0] =x;
    }

    else if(isfull()){
        cout<<"queue overflow"<<endl;
        return;
    }

    else{
        rear =rear+1;
        arr[rear] =x;
        cout<<"pushed"<<x<<"in"<<endl;
    }

}

void pop(){
    if((isempty())){
        cout<<"queue under flow"<<endl;
        return ;
    }

    else{
        if(front ==rear){

            front =rear =-1;
        }

        else{
            cout<<"pop"<<arr[front]<<"in"<<endl;
            front =front+1;
        }
    }

}




int start(){
    if(isempty()){
    cout<<"empty\n";
        return -1;
}

else{
    return arr[front];
}

}





};
int main(){
    Queue q1(5);
    q1.push(5);
     q1.push(4);
      q1.pop();
      
    cout<<q1.isempty()<<endl;
    cout<<q1.isfull()<<endl;
    cout<<q1.start()<<endl;
}