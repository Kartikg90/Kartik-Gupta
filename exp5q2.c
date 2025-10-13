//WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include <stdio.h>

int main() {
    int n;

    // Read the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);

    // Read the integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int positive = 0, negative = 0, odd = 0, even = 0;

    // Count positive, negative, odd, and even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Display counts
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
