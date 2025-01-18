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
  
node* createlinkedlist( int arr[] ,int index, int size){
    
    if(index == size){
        return NULL;
    }

    node*temp;
    temp = new node (arr[index]);
    temp->next =  createlinkedlist(arr ,index+1, size);
    return temp;



}
int main(){
    node* head;
     head =NULL;
    int arr[5] ={1,2,3,4,5};
 head = createlinkedlist(arr ,0, 5);

 if(head!=NULL){
    node* temp = head;
     head = head->next;
    delete temp;

 }

 
 while (head){
    cout<<head->data<<endl;
    head =head->next;
 }
}




//insert in front

// class node{
//     public:
//     int data;
//     node*next;

//     node(int value){
//         data = value;
//         next =NULL;
//     }
// };
  
// node* createlinkedlist( int arr[] ,int index, int size, node* pre){
    
//     if(index == size){
//         return pre;
//     }

//     node*temp;
//     temp = new node (arr[index]);
//     temp->next =  pre;
//     return createlinkedlist(arr ,index+1, size ,temp);



// }
// int main(){
//     node* head;
//      head =NULL;
//     int arr[5] ={1,2,3,4,5};
//  head = createlinkedlist(arr ,0,5,head );

 

//  node*temp=head;
//  while (temp!=NULL){
//     cout<<temp->data<<endl;
//     temp =temp->next;
//  }
// }
