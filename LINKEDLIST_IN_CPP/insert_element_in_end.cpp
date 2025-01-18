#include<iostream>
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

    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;

//     Node(int value){
//         data = value;
//         next = NULL;
       
//     }

// };

// void insertend(Node* &tail,int x ){
  
            
//         tail->next =new Node(x);
//         tail =tail->next;
//     }

//     void print(Node * &head){
//         Node *temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp = temp->next;
//     }

//     }
// int main(){
//     Node *head , *tail;
    
//         head =tail = NULL;
//         head = new Node (5);
//             tail = head;
//                insertend(tail ,5) ;
//                insertend(tail, 6 ) ;
//                insertend(tail, 8) ;
//                insertend(tail, 9 ) ;
            
//                print(head);

    

// }