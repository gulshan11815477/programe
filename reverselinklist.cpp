#include<iostream>
using namespace std;
 struct node
 {
     int data;
     node * next;
     node(int x)
     {
         data=x;
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
 
 node* reverse(node *head)
 {
     node *curr,*prev,*forw;
     prev=NULL;
     curr=head;
    
     while(curr!=NULL)
     {
         forw=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forw;
         
     }
     return prev;
 }
 
 node *insertE(node *head,int p)
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
 
 
 int main()
 {
     node *head=NULL;
     head=insertE(head,94);
     head=insertE(head,31);
     head=insertE(head,65);
     head=insertE(head,89);
     head=insertE(head,31);
     head=insertE(head,00);
     printlist(head);
     cout<<"after reversal\n";
     head=reverse(head);
     printlist(head);
     return 0;
 }
