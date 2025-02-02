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
void insert_at_given_postion(node* &head,int x,int pos)
{
  node* temp=new node(x);
  if(head==NULL)
  {
        head=temp;
        return;
  }
  node* curr=head;
  int count=1;
  while(count!=pos-1)
  {
    curr=curr->next;
    count++;
  }
  temp->next=curr->next;
  curr->next=temp;
  return;
}
void delete_first_node(node* &head)
{
  if(head==NULL)

{
  return;
}
node* temp=head;
head=head->next;
delete temp;
}
void delete_At_last(node* head)
{
  if(head==NULL)
  {
    return;
  }
  node* temp=head;
  node* curr=head;
  while(curr->next->next!=NULL)
  {
    curr=curr->next;
  }
  temp=curr->next;
  curr->next=NULL;
  delete temp;
}
void print(node* &head)
{
  if(head==NULL)
  {
    return;
  }
  cout<<head->data<<" ";
  print(head->next);
}

void find_ele(int x,node* head)
{
  node* curr=head;
  while(curr!=NULL)
  {
    if(curr->data==x)
    {
      cout<<"Element found";
    }
    curr=curr->next;
  }
  cout<<"Element not found";

}
int main()
{
  node* head=NULL;
  insert_at_begin(head,10);
  insert_at_begin(head,20);
  insert_at_begin(head,30);
  print(head);
  cout<<endl;
  insert_at_end(head,40);
  insert_at_end(head,50);
  insert_at_end(head,60);
  print(head);
  cout<<endl;
  insert_at_given_postion(head,70,3);
  insert_at_given_postion(head,80,5);
  insert_at_given_postion(head,90,7);
  print(head);
  delete_first_node(head);
  cout<<endl;
  print(head);
  cout<<endl;
  delete_At_last(head);
  print(head);
  cout<<endl;
  find_ele(30,head);

  return 0;
}