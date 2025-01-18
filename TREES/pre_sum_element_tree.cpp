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

// without return type
// void sumtree(node *root ,int &sum){
//     if(root ==NULL){
//         return ;
//     }
//     sum+=root->data;
//     sumtree(root->left,sum);
//     sumtree(root->right,sum);
// }

// with returntype

int sumtree(node *root , int sum){
    if (root ==NULL){
        return 0;
    }

    return root->data+sumtree(root->left,sum)+sumtree(root->right, sum);
}
int main(){

cout<<"Enter root element:";
node *root;

 root = binarytree();
 int sum =0;
 cout<<sumtree(root ,sum);
 


}