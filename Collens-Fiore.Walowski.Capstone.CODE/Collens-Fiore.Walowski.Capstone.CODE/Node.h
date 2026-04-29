#pragma once
#include <string>
using namespace std;

class Node
{
public:
    string word;
    Node *next;

    Node();
    Node(string Word);
    ~Node();

    // methods
    bool setData(string newword);
    string getData();

    void setNext(Node *nextNode);
    Node *getNext();
};

