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
node* middle_of_linked_list(node* &head)
{
  node* slow=head;
  node* fast=head;
  // The two condition check for the even and odd length of the linked list the first checks if the fast pointer is not null and the second checks if the fast pointer is not null and the next of the fast pointer is not null and the condition for checkking of the ven length linked list is the second condition and for odd length linked list is the first condition where the fast pointer is not null
  while(fast!=NULL && fast->next!= NULL)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  cout<<slow->data;
  return slow;
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
{ node* head=NULL;
  insert_at_begin(head,10);
  insert_at_begin(head,20);
  insert_at_begin(head,30);
  insert_at_begin(head,40);
  insert_at_begin(head,50);
  insert_at_begin(head,60);
  print(head);
  cout<<endl;

  node* pointer=middle_of_linked_list(head);
  cout<<endl;
  cout<<pointer->data;
  cout<<endl;
  return 0;
}
