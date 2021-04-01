#include "Node.h"

Node::Node()
: num_(0),
  left(nullptr),
  right(nullptr)
  { }

Node::Node(int num_)
: left(nullptr),
right(nullptr)
{
    this->num_ = num_;
}