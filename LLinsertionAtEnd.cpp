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

node * insertE(node *head, int p)
{
    node *temp=new node(p);
    node *pt=head;
    
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    else{
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=temp;
        return pt;
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
    head=insertE(head,94);
        insertE(head,31);
        insertE(head,65);
        insertE(head,89);
        insertE(head,31);
         
        printlist(head);
        cout<<"\n";
        printlist(head);
        
        return 0;
    
}
