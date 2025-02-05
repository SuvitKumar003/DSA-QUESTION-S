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
/*node* nth_node_from_end(node* &head,int n)
{
int c=0;
node* curr=head;
while(curr!=NULL)
{
  c++;
  curr=curr->next;
}
int pos=c-n+1;
if(pos<=0)
{
  return NULL;
}
 curr=head;
for(int i=1;i<pos;i++)
{
  curr=curr->next;

}
return curr;
}
*/
node* nth_node_from_end(node* &head,int n)
{
  node* slow=head;
  node* fast=head;
  while(n--)
  {
    if(fast==NULL)
    {
      return NULL;
    }
    fast=fast->next;
  } 
  while(fast!=NULL)
  {
    slow=slow->next;
    fast=fast->next;
  }
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
  int n=6;
  node* pointer=nth_node_from_end(head,n);
  cout<<pointer->data;
  cout<<endl;
  return 0;
}