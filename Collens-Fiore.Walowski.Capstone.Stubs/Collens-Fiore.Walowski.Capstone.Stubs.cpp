#include <iostream> 
// Made by Kailey Collins-Fiore and Samuel Walowski

#include "TheStackIn25Words.h"


int main()
{
    TheStackIn25Words stack;
    stack.mainMenu();
    return 0;
}

// Requirements

// Functional:

// It should store the directions so the last one entered is the first one out.
// It should only add "push" directions to the top of the stack.
// It should only remove "pop" directions from the top of the stack.
// If the stack is empty and a pop is tried, it should tell the user.
// The App should use 25 most used words

// Non Functional:

// This should be built using classes
// It should use nodes to make a stack
// Code should be readable and easy to work on
// It should be able to handle a big number of tunnels
// Stack operations "push and pop" should be fast and simple
// It'll use console input and output to run.
// We're not using any stack library just building it ourselves.