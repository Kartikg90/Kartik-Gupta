#include <stdio.h>

int main() {
    int varInt = 10;
    float varFloat = 5.5;
    char varChar = 'A';

    int *ptrInt = &varInt;
    float *ptrFloat = &varFloat;
    char *ptrChar = &varChar;

    printf("Original int pointer = %p, value = %d\n", (void*)ptrInt, *ptrInt);
    ptrInt++; // increment
    printf("After increment int pointer = %p\n", (void*)ptrInt);
    ptrInt--; // decrement
    printf("After decrement int pointer = %p, value = %d\n", (void*)ptrInt, *ptrInt);

    printf("Original float pointer = %p, value = %.2f\n", (void*)ptrFloat, *ptrFloat);
    ptrFloat++; // increment
    printf("After increment float pointer = %p\n", (void*)ptrFloat);
    ptrFloat--; // decrement
    printf("After decrement float pointer = %p, value = %.2f\n", (void*)ptrFloat, *ptrFloat);

    printf("Original char pointer = %p, value = %c\n", (void*)ptrChar, *ptrChar);
    ptrChar++; // increment
    printf("After increment char pointer = %p\n", (void*)ptrChar);
    ptrChar--; // decrement
    printf("After decrement char pointer = %p, value = %c\n", (void*)ptrChar, *ptrChar);

    return 0;
}
