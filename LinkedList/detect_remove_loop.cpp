#include<iostream>
#include<unordered_set>
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
void print(node* head)
{
  node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void detect_remove_loop(node* &head)
{
  unordered_set<node*> s;
  node* temp=head;
  while(temp!=NULL)
  {
    if(s.find(temp->next)!=s.end())
    {
      temp->next=NULL;
      return;
    }
    s.insert(temp);
    temp=temp->next;

  }
  return;
}
int main()
{
  node* head=NULL;
  insert_at_begin(head,10);
  insert_at_begin(head,9);
  insert_at_begin(head,8);
  insert_at_begin(head,7);
  insert_at_begin(head,6);
  insert_at_begin(head,5);
  insert_at_begin(head,4);
  insert_at_begin(head,3);
  insert_at_begin(head,2);
  insert_at_begin(head,1);
  head->next->next->next->next->next->next->next->next->next->next=head->next->next->next->next;
  print(head);
  detect_remove_loop(head);
  print(head);
}