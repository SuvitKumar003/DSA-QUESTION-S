#include<iostream>
using namespace std;
struct node{
  node* next;
  int data;
  node(int x)
  {
    next=NULL;
    data=x;
  }
};
void reverse_linked_list(node* &head)
{
  node* prev=NULL;
  node* curr=head;
  while(curr!=NULL)
  {
   /* node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    head=curr;
    */
    node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    
  }

}
void insert_at_begin(node* &head,int x)
{
  if(head==NULL)
  {
    head=new node(x);
    return;
  }
  node* temp=new node(x);
  temp->next=head;
  head=temp;
}
void print(node* head)
{
  node* curr=head;
  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}
int main()
{
  node* head=NULL;
  insert_at_begin(head,10);
  insert_at_begin(head,20);
  insert_at_begin(head,30);
  insert_at_begin(head,40);
  insert_at_begin(head,50);
  insert_at_begin(head,60);
  print(head);
  cout<<endl;
  reverse_linked_list(head);
  print(head);
  cout<<endl;
  return 0;
}
