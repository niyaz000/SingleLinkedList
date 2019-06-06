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

int SingleLinkedList::pop_front()
{
  if (this->head == nullptr)
  {
    throw "LinkedList is empty";
  }
  int data = this->head->data;
  const Node *head = this->head;
  this->head = this->head->next;
  delete head;
  return data;
}

int SingleLinkedList::pop_back()
{
  if (this->head == nullptr)
  {
    throw "LinkedList is empty";
  }
  if (this->head->next == nullptr)
  {
    const auto data = this->head->data;
    delete this->head;
    this->head = nullptr;
    return data;
  }
  Node *temp = this->head;
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }
  auto node = temp->next;
  const auto data = node->data;
  delete node;
  temp->next = nullptr;
  return node->data;
}