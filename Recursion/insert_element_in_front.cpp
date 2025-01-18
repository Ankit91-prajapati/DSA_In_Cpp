#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int value){
     data= value;
     next = NULL;
    }

};
node* insertfront(int arr[], int index ,int size ,node *pre){
    if(index == size)
     return pre;

    node* temp =new node( arr[index]);
    temp->next = pre;
  return  insertfront(arr , index+1 ,size, temp);

}
int main(){
    node*head;
    node*pre = NULL;
    int arr[5] ={8,7,6,5,4};
 head = insertfront(arr ,0, 5 , pre);

 node*temp = head;
 while(temp!= NULL){
    cout<<temp->data<<endl;
    temp =temp->next;
 }

}