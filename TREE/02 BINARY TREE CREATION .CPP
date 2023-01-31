#include<iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node *push(int x)
{
    node *child=new node();
    child->data=x;
    child->left=NULL;
    child->right=NULL;
    
    return child;
    
}
void printtree(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"->";
        printtree(n->right);
        n=n->left;
    }
    // cout<<endl;
}


int main(){
    node* root=push(1);
    
    root->left=push(45);
    root->right=push(85);
    root->left->left = push(5);
    root->left->right = push(6);
    
    printtree(root);

    
}
