#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

Node* binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node *temp = new Node(x);
    cout<<"Enter left element "<<x<<":";
    temp->left = binarytree();
     cout<<"Enter right element "<<x<<":";
    temp->right = binarytree();
    return temp;

}

void mirrortree(Node *root){
    if (root ==NULL){
        return ;
    }
    
   Node* temp = root->left;
   root->left =root->right;
   root->right =temp;
   mirrortree(root->left);
   mirrortree(root->right);
   
   

}

void preorder(Node *root){
    if(root ==NULL){
        return ;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root ->right);
}

int main(){
    cout<<"Enter root element:";
    Node*root;
    root =binarytree();
    mirrortree(root);
    preorder(root);
}