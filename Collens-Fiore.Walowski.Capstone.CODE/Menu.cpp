#include "Menu.h"
#include <iostream>
using namespace std;

Menu :: Menu(){

}

Menu :: ~Menu(){

}
        void Menu ::addManyWordsToStack()
        {
            string data[25] = {
                // all words will go here
                // once we talk to doc we will fix this
            };
            for (int i = 0; i < 25; i++)
            {
                if (data[i] != "")
                {
                    wordStack.push(data[i]);
                }
            }
        }
        void Menu ::menu()
        {
            string theMenu =
                "Please make a selection:"
                "_________________________"
                "0. Exit"
                "1. Disply Stack"
                "_________________________";
        
        while (true)
        {
            string userChoice = io.getInputFromUser(theMenu);
            if (userChoice.empty())
                userChoice = "x"

                    switch (userChoice[0])

                {
                case '0':
                    return;
                    //exits the program
                case '1':
                    if (wordStack.stackIsEmpty()) {
                    cout << "The stack is empty." << endl;
                } else {
                    while (!wordStack.stackIsEmpty()) {
                        cout << "Popped: " << wordStack.pop() << endl;
                    }
                }
                break;
                default:
                    io.displayMessageToUser("Invalid choice. Please try again.");
                    break;
                }
            io.displayMessageToUser("/n");
        }
    }
       