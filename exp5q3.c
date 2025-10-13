//WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.

#include <stdio.h>

int main() {
    int n, num, frequency = 0;

    // Read the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);

    // Read the integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number whose frequency is to be found
    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    // Count frequency of the number in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            frequency++;
        }
    }

    // Print the frequency
    printf("Frequency of %d is: %d\n", num, frequency);

    return 0;
}