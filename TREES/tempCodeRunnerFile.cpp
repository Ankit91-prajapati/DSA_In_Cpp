int main(){
    int x;
    cout<<"Enter element in the root:";
    cin>> x;
    int first ,second;
    Node *root = new Node(x);
    queue<Node*> q;
    q.push(root);
     
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
