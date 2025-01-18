#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
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
    if(x ==-1){
       return NULL;
    }
    Node *temp = new Node(x);
    cout<<"Enter left element of "<<x<<":";
    temp->left = binarytree();
    cout<<"Enter right element of "<<x<<":";
    temp->right = binarytree();
    return temp;

}


int main(){
    cout<<"Enter root element:";
    Node *root;
    root = binarytree();

//preorder traversal using stack
    // vector<int>ans;
    // stack<Node*>s;
    // s.push(root);
    // while(!s.empty()){
    //     Node *temp = s.top();
    //     s.pop();
    //     ans.push_back(temp->data);
    //     if(temp->right){
    //         s.push(temp->right);
    //     }

    //     if(temp->left){
    //         s.push(temp->left);
    //         }
    //     }

    //  for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<"  ";
    //  }

//postorder traversal using stack
    vector<int>ans;
    stack<Node*>s;
    s.push(root);
    while(!s.empty()){
        Node *temp = s.top();
        s.pop();
        ans.push_back(temp->data);

         if(temp->left){
            s.push(temp->left);
            }
        
        if(temp->right){
            s.push(temp->right);
        }

    }
      reverse (ans.begin(),ans.end());

     for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<"  ";
     }




    }






