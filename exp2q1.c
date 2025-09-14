//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>
int main () {
    float length, width, area, perimeter;
    
    // input values
    printf("Enter the length of a rectangle: ");
    scanf("%f" , &length);
    printf("Enter the width of a rectangle: ");
    scanf("%f" , &width);

    // formula to find area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);
   
    
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;

}