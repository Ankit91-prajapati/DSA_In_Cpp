#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
       
    }


};

bool check(vector<Node*>visited , Node* &temp){
    for(int i=0 ; i<visited.size(); i++){
        if(visited[i] == temp){
            return 1;
        }
    }
    return 0;
}
  bool detectloop(Node *head){ 
    vector<Node*> visited;
    Node *temp = head; 
  while(temp!=NULL){
        if(check(visited ,temp))
        return 1;
        visited.push_back(temp);
        temp =temp->next;
    }
    return 0;
  }
int main(){
    Node *head ,*tail;
    int arr[5]  = {  2,7,8,9,5 };
    head = tail = NULL;
    for(int i=0; i<5; i++){
        if(head ==NULL){
            head = new Node(arr[i]);
            tail = head;
        }

        else{
            tail->next = new Node(arr[i]);
            tail =tail->next;
        }
    }
    tail->next = head;

    cout<<detectloop(head);

  


}
