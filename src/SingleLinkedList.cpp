#include <include/SingleLinkedList.hpp>

SingleLinkedList::SingleLinkedList()
{
  this->head = nullptr;
}

void SingleLinkedList::push_front(int data)
{
  if (isEmpty())
  {
    this->head = new Node(data);
    return;
  }
  this->head = new Node(data, this->head);
}

int SingleLinkedList::peek_front() const
{
  if (isEmpty())
  {
    throw "LinkedList is empty";
  }
  return this->head->data;
}

void SingleLinkedList::push_back(int data)
{
  if (isEmpty())
  {
    return this->push_front(data);
  }
  auto temp = this->getTailNode();
  temp->next = new Node(data);
}

int SingleLinkedList::peek_back() const
{
  if (isEmpty())
  {
    throw "LinkedList is empty";
  }
  return getTailNode()->data;
}

SingleLinkedList::Node *SingleLinkedList::getTailNode() const
{
  auto temp = this->head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  return temp;
}

int SingleLinkedList::pop_front()
{
  if (isEmpty())
  {
    throw "LinkedList is empty";
  }
  int data = this->head->data;
  auto head = this->head;
  this->head = this->head->next;
  delete head;
  return data;
}

int SingleLinkedList::pop_back()
{
  if (isEmpty())
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
  auto temp = this->head;
  while (temp->next->next != nullptr)
  {
    temp = temp->next;
  }
  auto node = temp->next;
  const auto data = node->data;
  delete node;
  temp->next = nullptr;
  return data;
}

bool SingleLinkedList::isEmpty() const
{
  return this->head == nullptr;
}

void SingleLinkedList::remove(int data)
{
}