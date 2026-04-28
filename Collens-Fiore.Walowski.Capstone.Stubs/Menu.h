#pragma once 
#include "Menu.cpp"

class Menu
{
private:
Stack wordStack;
InputOutput io; 

public:
    Menu();
    ~Menu();

    void menu();

    void addWordsToStack();
    void pushWord();
    void popWord();
    void displayStack();
};
#endif