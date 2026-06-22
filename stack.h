/*********************************************************
 * Name: Isaac Abraham
 * Assignment 4: Simple Int Stack
 *********************************************************/

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10

class Stack {
private:
    int data[STACK_SIZE]; // Static integer array for the stack
    int top;              // Tracks the top element index

public:
    Stack();              // Constructor

    // Mandatory Public Interfaces
    bool push(int value);   // Insert to top
    bool pop(int* value);   // Remove and return top via pointer
    bool peek(int* value);  // Return top via pointer without removing
    bool isEmpty();         // Check if empty
};

#endif // STACK_H
