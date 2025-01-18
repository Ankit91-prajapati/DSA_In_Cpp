#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *left, *right;
    Node(int value){
        data = value;
        left =right =NULL;
    }
};

vector<int>inorder(Node *root){
    vector<int>ans;
    while(root){
        if(!root->left){
            ans.push_back(root->data);
            root = root->right;
        }
        else{
            Node *curr = root->left;
            while(curr->right && curr->right!=root){
                curr =curr->right;
            }
                if(curr->right ==NULL){
                    curr->right =root;
                    root =root->left;
                }

                else{
                    curr->right =NULL;
                    ans.push_back(root->data);
                    root = root->right;

                }
            }
        }
    

  return ans;
}
int main(){
    int x;
    cout<<"Enter root element:";
    cin>>x;
    int first ,second;
    Node *root =new Node(x);
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
    
        cout<<"Enter element of left child "<<temp->data<<":";
        cin>>first;
        if(first!=-1){
            temp->left =new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter element of right child "<<temp->data<<":";
        cin>>second;
        if(first!=-1){
            temp->right =new Node(second);
            q.push(temp->right);

        }
        
    }
    vector<int>ans = inorder(root);
    for (int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    

}