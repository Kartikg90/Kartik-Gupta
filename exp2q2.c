//WAP a C program to Convert temperature from Celsius to Fahrenheit using the  formula: F = (C * 9/5) + 32

#include <stdio.h>
int main() {
    float F, C ;  // F = fahrenheit, C = Celsius

    //input values in celsius
    printf("Enter Temperature in Celsius: ");
    scanf( "%f", &C );

    // Formula of converting celsius into fahrenheit
    F = ( C * 9 / 5 ) + 32;

    //Output result
    printf(" %.2f Celsius = %.2f Fahrenheit \n ", C, F  );

    return 0;

}