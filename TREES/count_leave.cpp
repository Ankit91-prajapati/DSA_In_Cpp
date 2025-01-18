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

// void countleave(node *root, int &count){
//     if (root ==NULL){
//         return ;
//     }
//     if (!root->left && !root ->right){
//         count++;
//     }

//     countleave(root->left,count);
//     countleave(root->right ,count);
// }

int countleave(node *root, int count){
    if (root ==NULL){
        return 0 ;
    }
    if (!root->left && !root ->right){
        return 1;
    }
   return countleave(root->left,count)+countleave(root->right ,count);
}
int main(){
    cout<<"Enter root element:";
    node *root;
 root =   binarytree();

int count =0;
 cout<<countleave(root ,count);


}