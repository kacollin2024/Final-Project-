#include "TheStackIn25Words.h"
#include <string>
#include "Node.h"
using namespace std;

TheStackIn25Words::TheStackIn25Words()
{
    // constructor
}

TheStackIn25Words::~TheStackIn25Words()
{
    // deconstructor
    // clears up memory by deleting all nodes
}

void TheStackIn25Words::mainMenu()
{

}

void TheStackIn25Words::push()
{
    // Create new node with this direction
    // Check if our stack is empty (this is the first node)
    // If empty, this node become the top
    // If not empty, connect this node to the current op
    // Make this new node top of each stack
}

string TheStackIn25Words::pop()
{
    // Check if stack is empty
    // If empty, tell the user there is nothing to pope and return null
    // Otherwise, grab the top node
    // move top down to the previous node
}

bool TheStackIn25Words::stackIsEmpty()
{
    // Check if our stack has ny nodes
    // return true if top is null (empty stack)
    // return false if we have nodes (top is not null)
}
