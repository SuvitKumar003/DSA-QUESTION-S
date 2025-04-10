#include <iostream>
using namespace std;

class Node {
public:
  int x;
  Node* next;
  Node(int x1) : x(x1), next(nullptr) { }
};

// Push onto tail; returns new head if list was empty
Node* push(Node* head, int x) {
  if (!head) return new Node(x);
  Node* curr = head;
  while (curr->next) curr = curr->next;
  curr->next = new Node(x);
  return head;
}

// Insert at head; returns the new head
Node* insert_at_head(Node* head, int x) {
  Node* n = new Node(x);
  n->next = head;
  return n;
}

// Pop from tail; updates head via reference
int pop(Node*& head) {
  if (!head) {
    cout << "Stack is empty\n";
    return -1;
  }
  if (!head->next) {
    int val = head->x;
    delete head;
    head = nullptr;
    return val;
  }
  Node* prev = head;
  while (prev->next->next) prev = prev->next;
  Node* tail = prev->next;
  int val = tail->x;
  delete tail;
  prev->next = nullptr;
  return val;
}

void display(Node* head) {
  for (Node* cur = head; cur; cur = cur->next)
    cout << cur->x << " -> ";
  cout << "NULL\n";
}

int main() {
  Node* head = nullptr;

  head = push(head, 10);
  head = push(head, 20);
  head = push(head, 30);

  cout << "Stack after pushing: ";
  display(head);

  int p = pop(head);
  cout << "Popped: " << p << "\n";

  cout << "Stack now: ";
  display(head);

  head = insert_at_head(head, 5);
  cout << "After inserting 5 at head: ";
  display(head);

  return 0;
}
