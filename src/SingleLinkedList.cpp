#include <include/SingleLinkedList.hpp>

SingleLinkedList::SingleLinkedList()
{
  this->head = nullptr;
}

void SingleLinkedList::push_front(int data)
{
  if (this->head == nullptr)
  {
    this->head = new Node(data);
    return;
  }
  this->head = new Node(data, this->head);
}

int SingleLinkedList::peek_front()
{
  if (this->head == nullptr)
  {
    throw "LinkedList is empty";
  }
  return this->head->data;
}

void SingleLinkedList::push_back(int data)
{
  if (this->head == nullptr)
  {
    return this->push_front(data);
  }
  Node *temp = this->getTailNode();
  temp->next = new Node(data);
}

int SingleLinkedList::peek_back()
{
  if (this->head == nullptr)
  {
    throw "LinkedList is empty";
  }
  return getTailNode()->data;
}

SingleLinkedList::Node *SingleLinkedList::getTailNode()
{
  Node *temp = this->head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  return temp;
}