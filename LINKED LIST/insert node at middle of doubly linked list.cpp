#include<iostream>
using namespace std;
struct node{
    int data;
    node*prev;
    node*next;
};
// node at front in doubly linked list
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
//node in middle of linked list

void insertafter(node*prevnode,int new_data)
{
    if(prevnode ==NULL)
    {
        cout<<"given prev node can't be null"<<endl;
        return;
    }
    node*newnode= new node();
    newnode->data=new_data;
    newnode->next=prevnode->next;
    
    prevnode->next=newnode;
    newnode->prev=prevnode;
    
    if(newnode->next!=NULL)
    {
        newnode->next->prev=newnode;
        
    }
    
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
    
    // -6 3 4
    
    insertafter(head->next,10);
    //-3 11 10 4
    printlist(head);
}
