#pragma once
#include "TheStackIn25Words.h"
//#include "InputOutput.h"

class Menu
{
private:
    Stack wordStack;
   // InputOutput io;

public:
    Menu();
    ~Menu();

    void menu();
    void mainMenu();
    void addWordsToStack();
    void pushWord();
    void popWord();
    void displayStack();
};