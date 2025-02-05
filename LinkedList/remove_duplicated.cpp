#include<iostream>
using namespace std;
struct node{
  node* next;
  int data;
  node(int x)
  {
    data=x;
    next=NULL;
  }
};
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
void remove_duplicated(node* &head)
{
  if(head==NULL)
  {
    return;
  }
  if(head->next==NULL)
  {
    return;
  }
  node* curr=head;
  while(curr!=NULL)
  {
    node* temp=curr;
    while(temp->next!=NULL && temp->next->data==curr->data)
    {
      // we have used the condition temp->next outisde this loop for asigining to the curr->next becoz after this loop tep point to the element that last matched and temp->next point to the element that is not matched so we have to assign the temp->next to the curr->next
      temp=temp->next;
    }
    curr->next=temp->next;
    curr=curr->next;
  }
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
  insert_at_begin(head,20);
  insert_at_begin(head,30);
  insert_at_begin(head,30);
  insert_at_begin(head,40);
  insert_at_begin(head,50);
  insert_at_begin(head,60);
  insert_at_begin(head,60);
  print(head);
  cout<<endl;
  remove_duplicated(head);
  print(head);
  cout<<endl;
  return 0;
}
