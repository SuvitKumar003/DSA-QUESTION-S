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
void insert_at_sorted_position(node* &head,int x)
{
  node* temp = new node(x);
  if (head == NULL || head->data >= x) {
    temp->next = head;
    head = temp;
    return;
  }
  node* curr = head;
  while (curr->next != NULL && curr->next->data < x) {
    curr = curr->next;
  }
  temp->next = curr->next;
  curr->next = temp;
  return;
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
  node* head=new node(10);
  head->next=new node(20);
  head->next->next=new node(30);
  head->next->next->next=new node(40);
  insert_at_sorted_position(head,25);
  print(head);
  cout<<endl;
}