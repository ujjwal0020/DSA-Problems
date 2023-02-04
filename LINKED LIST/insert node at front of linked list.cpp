#include<iostream>
using namespace std;
//linked list node
struct node{
    int data;
    node*next;
};

void printlist(node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}

node*push(node*head,int newdata)
{
    node*newnode=new node();
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;
    return head;
    
    
}

int main()
{
  node*head=NULL;
  head=push(head,5);
  head=push(head,7);
  printlist(head);
}
