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

node *deletep(node *head,int pos)
{
    node *head2=head;
    int i=0;
    node *prev=NULL;
    if(pos!=1)
    {
    while(i!=pos-1)
    {
        prev=head;
        head=head->next;
        i++;
    }
    prev->next=head->next;
    head->next=NULL;
    return head2;
    }
    else
    {
       head2=head2->next;
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
    head=deletep(head,1);
    printlist(head);
    return 0;
}
