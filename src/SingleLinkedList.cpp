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