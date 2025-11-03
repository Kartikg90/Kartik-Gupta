//Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include <stdio.h>

int main() {
    // Step 1: Declare variables
    int varInt = 10;
    float varFloat = 5.5;
    char varChar = 'A';

    // Step 2: Declare pointers
    int *ptrInt;
    float *ptrFloat;
    char *ptrChar;

    // Step 3: Initialize pointers with addresses of variables
    ptrInt = &varInt;
    ptrFloat = &varFloat;
    ptrChar = &varChar;

    // Step 4 & 5: Print pointer values (addresses) and values pointed to
    printf("Pointer Int address: %p, value: %d\n", (void*)ptrInt, *ptrInt);
    printf("Pointer Float address: %p, value: %.2f\n", (void*)ptrFloat, *ptrFloat);
    printf("Pointer Char address: %p, value: %c\n", (void*)ptrChar, *ptrChar);

    return 0;
}
