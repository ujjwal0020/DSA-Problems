#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
};

node*newNode(int data)
{
    node*temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    
    return temp;
}
void printPostorder(node *node)
{
    if(node==NULL)
    return;
    //first traverse left part of tree
    printPostorder(node->left);
    //and second traverse right part of tree
    printPostorder(node->right);
    // and at last print data
    cout<<node->data<<" ";
    
}
/*

                 1
               /  \
              2    3
             / \
            4   5
            
            */
int main()
{
    node*root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
     root->left->left=newNode(4);
     root->left->right=newNode(5);
     cout<<"postorder traversal of tree :"<<endl;
     printPostorder(root);
}
