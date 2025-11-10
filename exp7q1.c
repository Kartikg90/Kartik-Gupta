#include <stdio.h>

// Structure for complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
Complex readComplex() {
    Complex c;
    printf("Enter real and imaginary part: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

// Function to write a complex number
void writeComplex(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
Complex addComplex(Complex a, Complex b) {
    Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

// Function to subtract two complex numbers
Complex subComplex(Complex a, Complex b) {
    Complex res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}

int main() {
    Complex c1, c2, sum, diff;
    printf("First complex number:\n");
    c1 = readComplex();
    printf("Second complex number:\n");
    c2 = readComplex();

    printf("First: ");
    writeComplex(c1);
    printf("Second: ");
    writeComplex(c2);

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("Sum: ");
    writeComplex(sum);
    printf("Difference: ");
    writeComplex(diff);

    return 0;
}
