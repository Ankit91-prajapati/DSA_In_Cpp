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
 head = createlinkedlist(arr ,0, 5 );

 int x=3;
 int value =40;
 x--;
 node*temp =head;
 while (x--)
 {
    temp =temp->next;
 }
 node*temp2 =new node(value);
 temp2->next =temp->next;
 temp->next =temp2;
 

 temp=head;
 while (temp!=NULL){
    cout<<temp->data<<endl;
    temp =temp->next;
 }
}

