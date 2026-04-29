#include "TheStackIn25Words.h"
#include <string>
#include "Node.h"
using namespace std;

TheStackIn25Words::TheStackIn25Words()
{
    // constructor
    top = nullptr; 
    count = 0;

}

TheStackIn25Words::~TheStackIn25Words()
{
    // deconstructor
    // clears up memory by deleting all nodes
    while (!stackIsEmpty())
    {
        pop();
    }
}

void TheStackIn25Words::push(string word)
{
    Node* newNode = new Node(word);

    if (stackIsEmpty())
    {
        top = newNode;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
    // Create new node with this direction
    // Check if our stack is empty (this is the first node)
    // If empty, this node become the top
    // If not empty, connect this node to the current op
    // Make this new node top of each stack
}

string TheStackIn25Words::pop()
{
     // Check if stack is empty
    if (stackIsEmpty)
    {
        // If empty, tell the user there is nothing to pope and return null
        return "null";
    }  
    // Otherwise, grab the top node
    Node* temp = top;
    string word = temp->word;
    top = top->next;
    delete temp;
    return word;
}

bool TheStackIn25Words::stackIsEmpty()
{
        // return true if top is null (empty stack)
    if (top ==nullptr)
    { 
        return true;
    }
    // return false if we have nodes (top is not null)
    return false;
}

//recycle code from the cave app 