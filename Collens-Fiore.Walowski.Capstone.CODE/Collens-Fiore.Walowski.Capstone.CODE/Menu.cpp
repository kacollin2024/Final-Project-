#include "Menu.h"
#include <iostream>
#include <string>
using namespace std;

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::addWordsToStack()
{
    string data[25] = {
        // all words will go here
        // once we talk to doc we will fix this
    };
    for (int i = 0; i < 25; i++)
    {
        if (!data[i].empty())
        {
            wordStack.push(data[i]);
        }
    }
}

void Menu::menu()
{
    string theMenu =
        "Please make a selection:\n"
        "_________________________\n"
        "0. Exit\n"
        "1. Display Stack\n"
        "_________________________\n";

    while (true)
    {
        string userChoice = io.getInputFromUser(theMenu);
        if (userChoice.empty())
            userChoice = "x";

        switch (userChoice[0])
        {
        case '0':
            return; // exits the menu method
        case '1':
            if (wordStack.stackIsEmpty()) {
                cout << "The stack is empty." << endl;
            }
            else {
                while (!wordStack.stackIsEmpty()) {
                    cout << "Popped: " << wordStack.pop() << endl;
                }
            }
            break;
        default:
            io.displayMessageToUser("Invalid choice. Please try again.");
            break;
        }
        io.displayMessageToUser("\n");
    }
}