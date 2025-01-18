#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node *left ,*right;
    node(int value ){
        data =value;
        left =right =NULL;
    }
};
node *binarytree(){
    int x;
    cin>>x;
    if (x== -1){
        return NULL;
    }
    node *temp =new node(x);
    cout<<"Enter left element "<<x<<":";
    temp->left =binarytree();
    cout<<"Enter right element "<<x<<":";
    temp->right =binarytree();
    return temp;
}
int heighttree(node *root , int x){
    if (root ==NULL){
        return 0;
    }
    return 1+ max(heighttree(root->left,x), heighttree(root->right,x));
}

int main(){
    cout<<"Enter root element:";
    node *root;
    root = binarytree();
  int x=0;
    cout<<"Height of root  is "<<heighttree(root ,x);


}