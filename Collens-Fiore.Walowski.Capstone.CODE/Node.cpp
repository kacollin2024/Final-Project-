#include "Node.h"
#include <string>
using namespace std;

Node::Node()
{
    next = nullptr;
}
Node::Node(string word)
{
    next = nullptr;
    setData(word);
}
bool Node ::setData(string newword)
{
    if (newword.empty())
        return false;
    data = newword;
    return true;
}
string Node::getData()
{
    return data;
}

// going to need more methods for this node class

void Node::setNext(Node *nextNode)
{
    next = nextNode;
}

Node *Node::getNext()
{
    return next;
}