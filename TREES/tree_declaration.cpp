#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left ,*right;

    Node(int value){
        data =value;
        left = right = NULL;

    }

};

void preorder(Node *root){
  if (root ==NULL){
    return;
  }
  
  cout<<root->data<<"  ";
  preorder(root->left);
  preorder(root->right);
  
}

void postorder(Node *root){
  if (root == NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);                                                      
  cout<<root->data<<" ";
   

}

void inorder(Node *root){
  if (root == NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right); 
}


int main(){
    int x;
    cout<<"Enter element in the root:";
    cin>> x;
    
    Node *root = new Node(x);
    queue<Node*> q;
    q.push(root);
      int first ,second;
    while(!q.empty()){
     
       Node *temp = q.front();
        q.pop();
        cout<<"Enter the value of left child "<<temp->data<<":";
          cin>>first;
        if(first!=-1){
          temp->left = new Node(first);
          q.push(temp->left);
        }

         cout<<"Enter the value of right child "<<temp->data<<":";
          cin>>second;
        if(second!=-1){
          temp->right = new Node(second);
          q.push(temp->right);
        }

    }

    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);


}




// Node* binarytree(){
//   int x;
//   cin>>x;
//   if (x == -1){
//     return NULL;
//   }
//   Node *temp = new Node(x);

//   cout<<"Enter the left element"<<x<<":";
//   temp->left = binarytree();

//   cout<<"Enter the right element"<<x<<":";
//   temp->right = binarytree();
//   return temp;

// }
// //level order taversal

//  vector<vector<int>> levelOrder(Node* root) {
//         vector<vector<int>>ans;
//         if(root == NULL) return ans;
        
//         queue<Node*>q;
//         q.push(root);

//         while(!q.empty()){

//             int level_size = q.size();

//             vector<int>level;

//             for(int i=0; i<level_size; i++){ 

//               Node*temp = q.front();
//               q.pop();

//               level.push_back(temp->data);

//             if(temp->left) q.push(temp->left);
            
//             if(temp->right) q.push(temp->right);

//         }
//             ans.push_back(level);

//         }

//         return ans;
//     }


// int main(){
//   cout<<"Enter root element:";
//   Node* root ;
//    root = binarytree();

//   // preorder(root);                      
//   //   cout<<endl;
//   //   postorder(root);
//   //   cout<<endl;
//   //   inorder(root);

//    vector<vector<int>>levels =levelOrder(root);

//    for(const auto& level: levels){

//     for(int val:level){
//       cout<<val<<" ";
//     }
//     cout<<endl;
//    }
      
    
   




//  }
