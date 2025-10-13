//Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

// Global variable declaration
int x = 5;

void showValue() {
    // Access and print global variable
    printf("In showValue(): x = %d\n", x);
}

void updateValue() {
    // Modify global variable
    x = 10;
    printf("In updateValue(): x = %d\n", x);
}

int main() {
    printf("In main(): Initial x = %d\n", x);
    showValue();
    updateValue();
    printf("In main(): Updated x = %d\n", x);
    return 0;
}
