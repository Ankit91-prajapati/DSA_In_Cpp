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
 int detectcircularloop(node* head){
    node*slow = head ,*fast = head;
    while(fast!=NULL and fast->next!=NULL){
        slow =slow->next;
      fast =  fast->next->next;
     if(slow == fast){
        break;
     }
    }
    
    if(fast ==NULL or fast->next==NULL){ 
    return 0;}
    int count = 1;
    slow =fast->next;
    while(slow!=fast){
        count++;
        slow = slow->next;
    }
    

    return count;
    
 }
};

int main(){
    node*head,*tail;
    head = tail =NULL;
    int arr[6] = {4,5,6,8,9,7};
    for(int i=0; i<6; i++){
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