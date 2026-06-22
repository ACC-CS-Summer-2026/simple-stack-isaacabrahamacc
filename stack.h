#endif // STACK_H// ============================================================================
// File: stack.h
// Course: COSC-2436-002 Data Structures
// Assignment: Assignment 4 - Simple Int Stack
// Description: Class interface declaration for a static integer Stack ADT.
//              Handles bounded stack attributes and public operational stubs
//              using pass-by-reference error signaling.
// ============================================================================

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

