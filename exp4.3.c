// Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include <stdio.h>

int main() {
    // Outer block
    int a = 1;
    printf("a in outer block: %d\n", a);

    {
        // Inner block
        int b = 2;
        printf("a in inner block: %d\n", a); // Accessible
        printf("b in inner block: %d\n", b); // Accessible
    }

    // printf("b in outer block: %d\n", b); // Error: b not accessible here

    {
        int a = 99; // Shadows outer 'a'
        printf("a in new block: %d\n", a); // Prints 99, inner 'a'
    }

    printf("a after inner blocks: %d\n", a); // Prints original outer 'a' value

    return 0;
}
