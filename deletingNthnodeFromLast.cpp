#include<iostream>
using namespace std;
// remove nth node from last

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

node *inserE(node *head,int p)
{ 
    node *temp=new node(p);
    node *head2=head;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    else
    {
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=temp;
        return head2;
    }
}
void printlist(node *head)
{
 while(head!=NULL)
 {
     cout<<head->data<<"->";
     head=head->next;
 }
}

node *deletepL(node *head,int pos)
{
    node *prev,*forw,*head2=head;
    prev=NULL;
    int i=0;
    forw=head;
    pos--;
    while(pos--)
    {
        forw=forw->next;
    }
    if(forw->next!=NULL)
    {
    while(forw->next!=NULL)
    {
        prev=head;
        head=head->next;
        forw=forw->next;
        
    }
    prev->next=head->next;
    head->next=NULL;
    return head2;
    }
    else{

        head=head->next;
        head2=head;
        return head2;
    }
}
int main()
{
    node *head=NULL;
    head=inserE(head,94);
    head=inserE(head,31);
    head=inserE(head,65);
    head=inserE(head,89);
    head=inserE(head,31);
    printlist(head);
    cout<<"after deleting 3rd node\n";
    head=deletepL(head,5);
    printlist(head);
    return 0;
}
