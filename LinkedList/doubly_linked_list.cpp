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
    return;
  }
  node* temp=new node(x);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void print_front(node* head)
{
  node* curr=head;
  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->next;
  }
}
void print_back(node* head)
{
  node* curr=head;
  while(curr->next!=NULL)
  {
    curr=curr->next;
  }
  while(curr!=NULL)
  {
    cout<<curr->data<<" ";
    curr=curr->prev;
  }
}
int main()
{
  node* temp1=new node(10);
  node* temp2=new node(20);
  node* temp3=new node(30);
  temp1->next=temp2;
  temp1->prev=NULL;
  temp2->next=temp3;
  temp2->prev=temp1;
  temp3->next=NULL;
  temp3->prev=temp2;
  print_front(temp1);
  cout<<endl;
  print_back(temp1);
  cout<<endl;
  insert_at_begin(temp1,40);
  print_front(temp1);
  cout<<endl;
  return 0;
}
