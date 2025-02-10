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
void reverse_linkedList_k(node*& head, int k) {
    if (!head || k <= 1) return;

    node* curr = head;
    node* prevTail = NULL;
    node* newHead = NULL;

    while (curr) {
        node* prev = NULL;
        node* temp = curr;
        int count = 0;

        // Reverse `k` nodes
        while (curr && count < k) {
            node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }

        // If this is the first reversed segment, update head
        if (!newHead) {
            newHead = prev;
        }

        // Connect previous segment to the newly reversed segment
        if (prevTail) {
            prevTail->next = prev;
        }

        prevTail = temp; // `temp` is now the tail of the reversed segment
    }

    head = newHead;
}
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
    insert_at_begin(head,70);
    insert_at_begin(head,80);
    insert_at_begin(head,90);
    insert_at_begin(head,100);
    print(head);
    cout<<endl;
    reverse_linkedList_k(head,3);
    print(head);

}