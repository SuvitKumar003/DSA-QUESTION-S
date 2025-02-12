#include<iostream>
using namespace std;
struct node{

  int data;
  node* next;
  node(int x)
  {
    data=x;
    next=NULL;
  }
};
void insert_at_end(node* &head,int x)
{
  if(head==NULL)
  {
    head=new node(x);
    return;
  }
  node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=new node(x);
}
bool detect_loop(node* &head)
{
  node* slow=head;
  node* fast=head;
  while(fast!=NULL && fast->next!=NULL)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  node* head=NULL;
  insert_at_end(head,1);
  insert_at_end(head,2);
  insert_at_end(head,3);
  insert_at_end(head,4);
  insert_at_end(head,5);
  insert_at_end(head,6);
  insert_at_end(head,7);
  insert_at_end(head,8);
  insert_at_end(head,9);
  insert_at_end(head,10);
  node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=head;
  cout<<detect_loop(head);
}