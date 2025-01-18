#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data = value;
        next = NULL;
    }
 bool detectcircularloop(node* head){
    node*slow = head ,*fast = head;
    while(fast!=NULL and fast->next!=NULL){
        slow =slow->next;
      fast =  fast->next->next;
     if(slow == fast){
        return 1;
     }
    }
    return 0;
 }
};

int main(){
    node*head,*tail;
    head = tail =NULL;
    int arr[5] = {4,5,6,8,9};
    for(int i=0; i<5; i++){
        if(head == NULL){
            head = new node(arr[i]);
            tail =head;
        }

        else{
         tail->next = new node(arr[i]);
         tail =tail->next;

        }
    }
    tail->next = head;
    node*temp = head;
    
 cout<<temp->detectcircularloop(head);

}