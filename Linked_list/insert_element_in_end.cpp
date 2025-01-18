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
    node*head,*tempa;
    tempa=head =NULL;
    int arr[5] ={1,2,3,4,5};
    for(int i=0; i<5; i++){  
    if(head ==NULL){  
    head = new node(arr[i]); 
    tempa =head;
}
else{
     
    tempa ->next= new node(arr[i]);
    tempa=tempa->next;

     
}

}

 while(tempa ->next == NULL) 
    tempa->next =new node(8);


 if(head != NULL){

if(head->next ==NULL){
     delete head;
     head =NULL;
 }
  
   else{
    
     node*curr = head;
     node* pre = NULL;
     while(  curr->next!= NULL){  
     pre =curr;
     curr =curr->next;
 }
delete curr;
 pre->next =NULL;
 }
 }



tempa=head;
while(tempa!=NULL){
    cout<<tempa->data<<endl;
    tempa=tempa->next;
}
}

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;

//     node(int value){
//         data = value;
//         next =NULL;
//     }
// };
// int main(){
//     node*head;
//     head =NULL;
//     int arr[5] ={1,2,3,4,5};
//     for(int i=0; i<5; i++){  
//     if(head ==NULL){  
//     head = new node(arr[i]); 
    
// }
// else{
//     node*temp =head;
//     while(temp->next!=NULL){  
//     temp=temp->next;
//     }
    

// temp->next=new node(arr[i]);
 
// }
// }



// node*temp=head;
// while(temp!=NULL){
//     cout<<temp->data<<endl;
//     temp=temp->next;
// }
// }