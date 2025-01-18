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
node* insertend(int arr[], int index ,int size){
    if(index == size)
     return NULL;

    node* temp =new node( arr[index]);
    temp->next = insertend(arr , index+1 ,size);
    return temp;
}
int main(){
    node*head;
    int arr[5] ={2,4,6,7,8};
 head = insertend(arr ,0, 5);

 node*temp = head;
 while(temp!= NULL){
    cout<<temp->data<<endl;
    temp =temp->next;
 }

}