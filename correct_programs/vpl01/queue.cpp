#include "queue.h"

struct Node
{
  int key;
  Node *next;
};

Queue::Queue()
{
  this->front_ = nullptr;
  this->back_ = nullptr;
}

void Queue::push(int k)
{
  Node *newNode = new Node{k, nullptr};
  if (this->count() == 0)
  {
    this->front_ = this->back_ = newNode;
    return;
  }
  this->back_->next = newNode;
  this->back_ = newNode;
}

void Queue::pop()
{
  if (this->count() == 0)
    throw EmptyException();
  Node *newFront = this->front_->next;
  delete this->front_;
  this->front_ = newFront;
}

int Queue::front() const
{
  if (this->count() == 0)
    throw EmptyException();
  return this->front_->key;
}

int Queue::back() const
{
  if (this->count() == 0)
    throw EmptyException();
  return this->back_->key;
}

int Queue::count() const
{
  int counter = 0;
  Node *actual = this->front_;
  while (actual != nullptr)
  {
    actual = actual->next;
    counter++;
  }
  return counter;
}