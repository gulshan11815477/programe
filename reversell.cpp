#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int p)
    {
        data=p;
        next=NULL;
    }
};

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

node *insertb(node *head,int p)
{
    node *temp=new node(p);
    if(head==NULL)return temp;
    else
    {
        temp->next=head;
        return temp;
    }
    
}
node *reverse(node *head)
{
    node *curr,*prev,*forw;
    curr=head;
    prev=NULL;
    while(curr!=NULL)
    {
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
        
    }
    return prev;
}

int main()
{
    node *head=NULL;
    head=insertb(head,94);
    head=insertb(head,31);
    head=insertb(head,65);
    head=insertb(head,89);
    head=insertb(head,31);
    printlist(head);
    head=reverse(head);
    cout<<"after reversal\n";
    printlist(head);
    return 0;
}


