#ifndef SINGLE_LINKED_LIST_HPP
#define SINGLE_LINKED_LIST_HPP

class SingleLinkedList
{

public:
  SingleLinkedList();
  void push_front(int data);
  int peek_front();
  void push_back(int data);
  int peek_back();

private:
  class Node
  {
  public:
    int data;
    Node *next;

  public:
    Node(int data, Node *next = nullptr)
    {
      this->data = data;
      this->next = next;
    }
  };
  Node *head;
  Node *getTailNode();
};

#endif