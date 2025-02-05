#include<iostream>
using namespace std;
struct node{
  int data;
  node* next;
  node* prev;
  node(int x)
  {
    data=x;
    next=NULL;
    prev=NULL;
  }
};
void insert_at_begin(node* &head,int x)
{
  if(head==NULL)
  {
    head=new node(x); 
    head->next=head;
    head->prev=head;
    return;
  }
  node* temp=new node(x);
  temp->next=head;
  temp->prev=head->prev;
  head->prev->next=temp;
  head->prev=temp;
  head=temp;
 return;
}
void insert_at_end(node* &head,int x)
{
  node* temp=new node(x);
  if(head==NULL)
  {
    head=temp;
    head->next=head;
    head->prev=head;
    return;
  }
  if(head->next==head)
  {
    temp->next=head;
    temp->prev=head;
    head->next=temp;
    head->prev=temp;
    return;
  }
  temp->next=head;
  temp->prev=head->prev;
  head->prev->next=temp;
  head->prev=temp;
  return;
}
void print(node* head)
{
  node* curr=head;
  do
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }while(curr!=head);
  cout<<endl;
  return;
}
int main()
{
  node* head=NULL;
  insert_at_begin(head,10);
  insert_at_begin(head,20);
  insert_at_begin(head,30);
  insert_at_begin(head,40);
  insert_at_begin(head,50);
  print(head);
  cout<<endl;
  insert_at_end(head,60);
  insert_at_end(head,70);
  insert_at_end(head,80);
  insert_at_end(head,90);
  insert_at_end(head,100);
  print(head);
  cout<<endl;
  return 0;
}