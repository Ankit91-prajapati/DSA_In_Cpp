#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left,*right;
    Node(int value){
        data =value;
        left =right =NULL;
    }
};
Node *insert(Node *root, int target){
    // base case
    if(!root){
        Node *temp =new Node(target);
        return temp;
    }
    if(target<=root->data){
        root->left = insert(root->left, target);
        
    }
    else{
        root->right = insert(root->right, target); 
    }


    return root;

}

void inorder(Node *root){
    if(!root){ 
    return ;
    }
    // left side
    inorder(root->left);
   //  root  data  
    cout<<root->data<<" ";
    // right side
    inorder(root->right);

}

bool search(Node *root, int element){
    if(!root){
        return 0;
    }

    if(root->data ==element){
        return 1;
    }

    if (root->data>element){
        return search(root->left,element);   
    }

    else{
        return search(root->right,element);
    }
}
int main(){
    Node *root = NULL;

    int arr[7] ={2,3,6,9,3,6,5};
    for(int i=0; i<7; i++){
        root = insert(root,arr[i]);
    }
    
    inorder(root);

   cout<<endl<<"targeted element present in tree give 1 or 0"<<endl << search(root , 9);

    

}