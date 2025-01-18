#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* pre ,*next;
    node(int value){
        data =value;

        next =pre =NULL;
    }
    
};
int main(){
    node *head;
    head = NULL;
    
    int arr[5]  ={ 2,4,6,8,9};
    for(int i = 0 ;i<5; i++){
        if(head == NULL){
            head = new node(arr[i]);
        }


        else{
          node*temp;
          temp = new node (arr[i]);
          temp->next =head;
          head->pre = temp;
          head =temp;
        }
    }

    node*print =head;
    while(print!=NULL){
        cout<<print ->data<<endl;
        print =print->next;
    }

}

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* pre ,*next;
//     node(int value){
//         data =value;

//         next =pre =NULL;
//     }
    
// };
// int main(){
//     node *head;
//     head = NULL;
//     node*tail =NULL;
//     int arr[5]  ={ 2,4,6,8,9};
//     for(int i = 0 ;i<5; i++){
//         if(head == NULL){
//             head = new node(arr[i]);
//           tail =head;
//         }


//         else{
//           node*temp = new node (arr[i]);
//           tail->next = temp;
//         temp->pre = tail;
//           tail =temp;

          
//         }
//     }

//     node*print =head;
//     while(print!=NULL){
//         cout<<print ->data<<endl;
//         print =print->next;
//     }

