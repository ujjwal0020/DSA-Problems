#include<iostream>
using namespace std;
struct node{
    int data;
    node*prev;
    node*next;
};

void push(node**headref,int new_data)
{
    node*newnode=new node();
    newnode->data=new_data;
    newnode->next=*headref;
    newnode->prev=NULL;
    
    if((*headref)!=NULL)
    {
        (*headref)->prev=newnode;
    }
    (*headref)=newnode;
}

void printlist(node*n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}
int main()
{
    node*head=NULL;
    push(&head,4);
    push(&head,3);
    push(&head,-6);
    printlist(head);
}
