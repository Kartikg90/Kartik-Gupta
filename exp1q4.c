//Write a C program to add two numbers, take number from user.

#include <stdio.h>
int main()
{
    int a, b, s;            //first number is a, second number is b and sum is s.
    printf("Enter the first number:");
    scanf("%d",&a);
    
    printf("Enter the second number:");
    scanf("%d",&b);

    s=a+b;                  // sum= first number + second number

    printf("Sum of numbers:%d", s);
    return 0;

}