#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *a, float *b, char *c) {
    *a = 100;      // modify int value
    *b = 99.9f;    // modify float value
    *c = 'Z';      // modify char value
}

int main() {
    int x = 10;
    float y = 5.5;
    char z = 'A';

    printf("Before modification:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    // Pass variables by reference
    modifyValues(&x, &y, &z);

    printf("After modification:\n");
    printf("x = %d, y = %.2f, z = %c\n", x, y, z);

    return 0;
}
