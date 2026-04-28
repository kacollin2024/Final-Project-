#pragma once
#include <string>
using namespace std;

class Node
{
private:
    string data;
    Node *next;

public:
    Node();
    Node(String Word);
    ~Node();

    // methods s
    bool setData(string newword);
    string getData();

    void setNext(Node *nextNode);
    Node *getNext();
};
#endif
