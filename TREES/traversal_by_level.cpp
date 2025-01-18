#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data =value;
        left =right = NULL;
    }

};

Node *binarytree(){
    
    int x;
    cin>>x;
    if (x ==-1){
        return NULL;
    }
    Node *temp =new Node(x);
    cout<<"Enter element of left "<<x<<":";
    temp->left = binarytree();
     cout<<"Enter element of right "<<x<<":";
    temp->right = binarytree();
    return temp;
    
}

void Level_traversal(Node *root){
    queue<Node*>q;
    q.push(root);
    Node*temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
      cout<<temp->data<<endl;
      if(temp->left){
        q.push(temp->left);
      }

      if(temp->right){
        q.push(temp->right);
      }
    }
}
int main(){
    cout<<"Enter root element:";
    Node *root;
    root = binarytree();

  cout<<"printing- element of tree"<<endl;;
 Level_traversal(root);

}