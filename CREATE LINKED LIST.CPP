#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    
};
node*createlist(int n,node*head)
{
    for(int i=0;i<n;i++)
    {
        int t;
        cout<<"enter elements"<<endl;
        cin>>t;
        node*k=new node();
        k->data=t;
        k->next=NULL;
        if(head==NULL)
        {
            head=k;
        }
        else
        {
             node*ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=k;
        }
    }
     return head;
}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    int n;
    node*head=NULL;
    cout<<"enter size";
    cin>>n;
   head= createlist(n,head);
    print(head);
    
    return 0;
}
