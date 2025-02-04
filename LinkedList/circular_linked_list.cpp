#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

void circular_linked_List(node*& head, int x) {
    node* temp = new node(x);
    if (head == NULL) {
        head = temp;
        temp->next = head;  // Ensure the first node links to itself
        return;
    }
    node* curr = head;
    while (curr->next != head) { // Traverse till last node
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head; // Complete the circular link
}
void delete_head_linked_list(node* &head)
{
  if(head==NULL)
  {
    return;
  }
  if(head->next==head)
  {
    delete head;
    head=NULL;
    return;
  }
  /*node* curr=head;
  while(curr->next!=head)
  {
    curr=curr->next;
  }
  node* temp=head;
  curr->next=head->next;
  head=head->next;
  delete temp;
  return;
  */
 // o(1 ) approach
 node* temp = head->next;
 head->data = temp->data;
 head->next = temp->next;
 delete temp;
 return;
}
void delete_kth_node(node* &head,int k)
{
  if(head==NULL)
  {
    return;
  }
  if(head->next==head)
  {
    delete head;
    head=NULL;
    return;
  }
  if(k==1)
  {
    delete_head_linked_list(head);
    return;
  }
  node* curr=head;
  while()
  {
    curr=curr->next;
    if (curr->next == head) {
      delete_head_linked_list(head);
      return;
    }
    k--;
  }
  node* temp=curr->next;
  curr->next=curr->next->next;
  delete temp;
  return;


}

void insert_at_begin(node*& head, int x) {
    node* temp = new node(x);
    if (head == NULL) {
        head = temp;
        temp->next = head;
        return;
    }
    node* curr = head;
    while (curr->next != head) { // Find the last node
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    head = temp; // Update head to new node
}

void print(node* head) {
    if (head == NULL) return; // If empty, do nothing
    node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head); // Print until we complete one cycle
    cout << endl;
}

int main() {
    node* head = NULL;
    circular_linked_List(head, 10);
    circular_linked_List(head, 20);
    circular_linked_List(head, 30);
    circular_linked_List(head, 40);
    
    print(head); // Check if elements are printed
    
    insert_at_begin(head, 50);
    
    print(head); // Check if 50 is added at the beginning
    cout<<endl;
    delete_head_linked_list(head);
    print(head); // Check if 50 is deleted
    cout<<endl;
    delete_kth_node(head,2);
    print(head); // Check if 20 is deleted
    cout<<endl;
    delete_kth_node(head,2);
    print(head); // Check if 30 is deleted

    
    return 0;
}
