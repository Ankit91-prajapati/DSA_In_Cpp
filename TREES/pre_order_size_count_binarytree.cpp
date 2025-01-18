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

// void treecount( Node *root, int &count){
//     if(root ==NULL){
//         return ;
//     }
//      count++;
//      treecount(root->left,count);
//      treecount(root ->right ,count);
     
// }

int treecount(Node* root ,int count){
    if (root == NULL){
        return 0;
    }
    return 1+treecount(root->left,count)+treecount(root->right,count);
}
int main(){
    cout<<"Enter root element:";
    Node *root;
    root = binarytree();

    int count = 0;
  cout<< treecount(root ,count)<<endl;

    

}