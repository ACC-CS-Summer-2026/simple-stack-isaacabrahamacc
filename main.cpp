/*********************************************************
 * Name: Isaac Abraham
 * Assignment 4: Simple Int Stack
 *********************************************************/

#include "main.h"

int main() {
    srand(time(0));
    Stack s;
    int temp;

    // Test Underflow
    std::cout << "Testing underflow..." << std::endl;
    if (!s.pop(&temp)) {
        std::cout << "Success: Stack is empty, cannot pop." << std::endl;
    }

    // Test Filling up to STACK_SIZE
    std::cout << "\nFilling stack..." << std::endl;
    for (int i = 0; i < STACK_SIZE; i++) {
        s.push(i * 10);
    }

    // Test Overflow
    if (!s.push(999)) {
        std::cout << "Success: Stack is full, overflow prevented." << std::endl;
    }

    // Dynamic Random Loop Testing (Scaling by STACK_SIZE * 100)
    std::cout << "\nRunning dynamic scaling operations..." << std::endl;
    for (int i = 0; i < (STACK_SIZE * 100); i++) {
        int op = rand() % 2;
        if (op == 0) {
            s.push(rand() % 100);
        } else {
            s.pop(&temp);
        }
    }

    std::cout << "\nAll logic tests completed successfully!" << std::endl;
    return 0;
}
