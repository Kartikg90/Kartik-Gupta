//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include <stdio.h>

void demo() {
    static int count = 0; // static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    demo(); // prints: Function called 1 times
    demo(); // prints: Function called 2 times
    demo(); // prints: Function called 3 times
    return 0;
}
