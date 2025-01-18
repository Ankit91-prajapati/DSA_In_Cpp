#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next ,*pre ;
    node(int value){
        data = value;
        next = pre = NULL;

    }
};

    class deque{
        node *front ,*rear;
        public:
        deque(){
            front =rear =NULL;
        }
    

    void push_front(int x){
        if(front == NULL){      
        front = rear = new node(x);
         cout<<"push_front"<<x<<endl;
        }

        else{
            node *temp = new node(x);
             cout<<"push_front"<<x<<endl;
            temp->next = front;
            front->pre =temp;
            front  = temp;
        }
    }

    void  push_back(int x){
          if(front == NULL){
      
        front = rear = new node(x);
        cout<<"push_back"<<x<<endl;
       
        }

        else{
            node *temp = new node(x);
            cout<<"push_back"<<x<<endl;
            temp->pre = rear;
            rear->next = temp;
            rear =temp;
        }
    }

    void pop_front(){

        if(front == NULL){
            cout<<"deque underflow"<<endl;;
        }

        else{
             
            node *temp =front;
            cout<<"pop_front"<<front->data<<endl;
            front =front->next;
            delete temp;
            if(front){
                front->pre =NULL;
            }
            else{
                rear = NULL;
            }

        }
    }

     void pop_back(){
       

        if(front == NULL){
            cout<<"deque underflow"<<endl;;
        }

        else{
            
            node *temp = rear;
             cout<<"pop_back"<<rear->data<<endl;
            rear =rear->pre;
            delete temp;

            if(rear){
                rear->next =NULL;
            }
            else{
                front = NULL;
            }
        }
    }

    bool empty(){
        return front == NULL;
    }

    int start(){
          if(front == NULL){
            cout<<"deque empty";
            
        }

        else{
            return front->data;
        }
    }

      int end(){
    
            return rear->data;
    }
    };
int main(){

    deque d1;
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
        
         

}