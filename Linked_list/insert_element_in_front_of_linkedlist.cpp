
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int value){
        data = value;
        next =NULL;
    }
};
int main(){
    node*head;
    head =NULL;
    int arr[5] ={1,2,3,4,5};
    for(int i=0; i<5; i++){  
    if(head ==NULL){  
    head = new node(arr[i]); 
}
else{
    node*temp;
    temp = new node(arr[i]);
    temp->next=head;
    head =temp;
}
}
int x=2;
node*curr=head;
node*pre =NULL;
x--;
while (x--)
{     pre =curr;
    curr =curr->next;
    
}
pre->next = curr->next;
delete curr;


node* temp;
temp = head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp =temp->next;
}



 


}