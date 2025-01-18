#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
    data =value;
      next=NULL;

    }
};

class queue{
    node *front,*rear;
    int size;
    public:
    queue(){
        front =rear =NULL;
        size =1;

    }

   bool isempty(){
    return front == NULL;
   }

   void push(int x){
    if(isempty()){
         cout<<"pushed"<<x<<endl;
         front=rear = new node(x);
        rear =front;
        
    }

    else{

         rear ->next = new node (x);
        rear =rear ->next;
       size++;
    }
   }

   void pop(){
    if(isempty()){
        cout<<"queue under flow\n";
    }


    else{
        node*temp =front;
        cout<<"pop"<<front->data<<endl;
        front =front->next;

      delete  temp;
      size --;

    }

   }



  int start(){
    if(front ==NULL){
        cout<<" Queue empty\n";
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

int main(){
    queue q1;
    q1.push(6);
     q1.push(7);
        q1.push(8);
           q1.push(9);
              q1.pop();
cout<<q1.isempty()<<endl;
cout<<q1.issize()<<endl;
cout<<q1.start()<<endl;

    


}