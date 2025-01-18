#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int d){
        data =d;
        next =NULL;

    }

    void insertnodeend( node* &tail, int value){

    
       tail->next =new node(value);
       tail =tail ->next;

       
    }

    void print(node* &head){
   node*temp =head;
   cout<<"printing:"<<endl;
    while(temp != NULL){
        
        cout<<temp->data<<endl;
        temp =temp->next;

        
    }
    }

    node* reverse(node* &head){
        node*curr,*pre=NULL,*fut=NULL;
        while(curr!=NULL){ 
            fut= curr->next;
        curr ->next =pre;
        pre =curr;
        curr =fut;
        }
        head =pre;

        return head;
     
      
    }



};
int main(){
    node*head = new node(5);
    node* tail = head;
    head->insertnodeend (tail ,10 );
    head->insertnodeend (tail , 5 );
    head->insertnodeend (tail ,7);
    head->insertnodeend (tail ,8);
     head->print(head);
    
    head->reverse(head);
    head->print(head);
    

   


}