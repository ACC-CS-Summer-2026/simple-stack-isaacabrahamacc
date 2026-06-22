/*********************************************************
 * Name: Isaac Abraham
 * Assignment 4: Simple Int Stack
 *********************************************************/

#include "stack.h"

// Constructor: Initializes top to -1 to signify an empty stack
Stack::Stack() {
    top = -1;
}

// isEmpty: Returns true if top is less than 0, otherwise false
bool Stack::isEmpty() {
    return (top < 0);
}

// push: Inserts an element onto the stack if there is space
bool Stack::push(int value) {
    if (top >= STACK_SIZE - 1) {
        return false; // Overflow protection
    }
    top++;
    data[top] = value;
    return true;
}

// pop: Removes the top element and returns it via a pointer
bool Stack::pop(int* value) {
    if (isEmpty()) {
        return false; // Underflow protection
    }
    *value = data[top];
    top--;
    return true;
}

// peek: Views the top element via a pointer without removing it
bool Stack::peek(int* value) {
    if (isEmpty()) {
        return false; // Underflow protection
    }
    *value = data[top];
    return true;
}
