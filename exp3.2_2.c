// WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting. Num * 1 = Num

#include <stdio.h>

int main() {
    int number, i;

    printf("Enter the number for multiplication table: ");
    scanf("%d", &number);

    printf("\nMultiplication Table of %d:\n\n", number);

    for(i = 1; i <= 10; ++i){
        printf("%d * %2d = %3d\n", number, i, number * i);
    }

    return 0;
}