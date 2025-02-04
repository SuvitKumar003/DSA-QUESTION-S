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
  }
  node* temp=new node(x);
  temp->next=head;
  temp->prev=head->prev;
  head->prev=temp;
  head=temp;
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
  return 0;
}