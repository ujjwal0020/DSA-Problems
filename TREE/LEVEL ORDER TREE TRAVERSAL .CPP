
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
       queue<Node*>q;
       q.push(root);
        if(root==NULL) return;
        while(!q.empty())
        {
            Node*temp=q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
            
            
        }

    }
