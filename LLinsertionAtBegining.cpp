#include<iostream>
using namespace std;
struct node
{
    int data;
    node * next;
    node(int p)
    {
        data=p;
        next=NULL;
    }
};

node * insertB(node *head, int p)
{
    node *temp=new node(p);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    else{
        temp->next=head;
        head=temp;
        return head;
    }
}

void printlist(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main()
{
    node *head=NULL;
    head=insertB(head,94);
    head= insertB(head,31);
    head=insertB(head,65);
    head=insertB(head,89);
    head=insertB(head,31);
         
        printlist(head);
        cout<<"\n";
        printlist(head);
        
        return 0;
    
}
