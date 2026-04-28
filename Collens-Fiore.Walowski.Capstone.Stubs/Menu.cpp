#include "Menu.h"
#include <iostream>
using namespace std;

class Menu
{
private:
public:
    Menu()
    {
    }

    ~Menu()
    {
        void addManyWordsToStack()
        {
            string data[25] = {
                // all words will go here
                // once we talk to doc we will fix this
            };
            for (int i = 0; i < 25; i++)
            {
            }
        }
        void menu()
        {
            string Menu =
                "Please make a selection:"
                "_________________________"
                "0. Exit"
                "1. Disply Stack"
                "_________________________";
        }
        while (true)
        {
            string userChoice = io.getInputFromUser(theMenu);
            if (userChoice.empty())
            userChoice = "x"

            switch (userChoice[0])
        
            {
            case '0':
                return;
            case '1':
                showStack.Print(need method here); 
                break;
            default:
               io.displayMessageToUser("Invalid choice. Please try again.");
                break;
            }
            io.displayMessageToUser("/n");
            
        }

        void displayMenu()
        { }
        
    }
}