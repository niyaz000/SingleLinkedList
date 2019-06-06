#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP

class SingleLinkedList
{
public:
  SingleLinkedList();

private:
  typedef struct Node
  {
    int data;
    struct Node *next;
  } Node;
  Node *head;
};

#endif