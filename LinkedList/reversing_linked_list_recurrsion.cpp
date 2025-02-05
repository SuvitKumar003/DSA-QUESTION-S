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
node* reverse_linked_list_recurrsion(node* &head)
{
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
  node* newhead=reverse_linked_list_recurrsion(head->next);
  head->next->next=head;
  head->next=NULL;
  return newhead;

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
  node* newhead=reverse_linked_list_recurrsion(head);
  print(newhead);
  cout<<endl;
  return 0;
}