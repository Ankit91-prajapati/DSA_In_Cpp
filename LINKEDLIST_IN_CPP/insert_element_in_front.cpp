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
    Node *head;
    head =NULL;
    int arr[5] = {2,4,5,8,9};
    for(int i=0 ;i<5; i++){ 
        if(head == NULL){  
    head = new Node(arr[i]);
        }

        else{
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head =temp;
        }
}

Node *temp = head;
while(temp!=NULL){
    cout<<temp->data<<endl;
    temp =temp->next;
}
}

// #include<iostream>
// using namespace std;
// class Node{
//      public:
//     int data;
//     Node *next;
   
//     Node(int value){
//         data = value;
//         next = NULL;
//     }

//      };
    
//     // it is a independent function not a  class member function so we cannot create a mutiple object
//     void insertfront(int x, Node* &head){
//         Node *temp = new Node(x);
//         temp->next = head;
//         head = temp;
//         }
 
//         void print (Node* &head){
//             Node *temp = head;
//             while(temp!=NULL){
//                 cout<<temp->data<<endl;
//                 temp =temp->next;
//             }
//         }


// int main(){
//     Node *head = new Node(4);
//      insertfront(9 ,head);
//      insertfront(5 ,head);
//      insertfront(8 ,head);
//      insertfront(9 ,head);

//       print(head);
    
    
// }


// // it is  a  class  method  so it  associated with a specific object we ways  call a object always create a new method this is note correct implementation 

// #include<iostream>
// using namespace std;
// class Node{
//      public:
//     int data;
//     Node *next;
   
//     Node(int value){
//         data = value;
//         next = NULL;
//     }

//     void insertfront(int x, Node* &head){
//         Node *temp = new Node(x);
//         temp->next = head;
//         head = temp;
//         }
 
//         void print (Node* &head){
//             Node *temp = head;
//             while(temp!=NULL){
//                 cout<<temp->data<<endl;
//                 temp =temp->next;
//             }
//         }

//      };
    
    
    


// int main(){
//     Node *head = new Node(4);
//     head->insertfront(9 ,head);
//     head-> insertfront(5 ,head);
//     head-> insertfront(8 ,head);
//     head-> insertfront(9 ,head);

//     head->  print(head);
    
    
// }

    

    
