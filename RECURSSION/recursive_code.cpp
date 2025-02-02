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
void print(node* head)
{
  if(head==NULL)
  {
    return;
  }
  cout<<head->data<<" ";
  print(head->next);
}
int main()
{
  node* head=new node(10);
  node* temp1=new node(20);
  node* temp=new node(30);
  head->next=temp;
  temp->next=temp1;
  print(head);
  return 0;
}