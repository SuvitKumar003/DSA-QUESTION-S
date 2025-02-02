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
void insert_at_end(node* &head,int x)
{
  node* temp= new node(x);
  if(head==NULL)
  {
    head=temp;
    return;
  }
  node* curr=head;
  while(curr->next!=NULL)
  {
    curr=curr->next;
  }
  curr->next=temp;
  temp->prev=curr;
  return;

}
node*  reversing_doubly_linked_list(node* head)
{
  node* curr=head;
  node* prev1=head;
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
  while(curr!=NULL)
  {
    node* temp=curr->next;
    curr->next=curr->prev;
    curr->prev=temp;
    //ROle of this line is to update the prev1 to the current node as at the end of the doubly linked list the prev1 will be the last node of the original list or we can say that it will be the head of the reversed list
    prev1=curr;
    //This line is used to update the curr to the next node as temp is the next node of the current node which is already stored in temp so we can update the curr to the temp
    curr=temp;
  }
  return prev1;
}
void deleting_head(node* &head)
{
  if(head==NULL)
  {
    return;
  }
  node* temp=head;
  head=head->next;
  head->prev=NULL;
  delete temp;
}
void delete_lat_node(node* &head)
{
  node* curr=head;
  if(head==NULL)
  {
    return;
  }
  while(curr->next->next!=NULL)
  {
    curr=curr->next;
  }
  node* temp=curr->next;
  curr->next=NULL;
  delete temp;


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
  insert_at_end(temp1,50);
  print_front(temp1);
  cout<<endl;
  node* head=reversing_doubly_linked_list(temp1);
  print_front(head);
  cout<<endl;
  deleting_head(head);
  print_front(head);
  cout<<endl;
  delete_lat_node(head);
  print_front(head);


  return 0;
}
