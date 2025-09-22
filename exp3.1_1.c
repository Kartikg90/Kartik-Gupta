// WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter each side of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) 
    {
         printf("The triangle is valid.\n");

         if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");
         else if (a == b || b == c || a == c)
            printf("It is an Isosceles triangle.\n");
         else 
            printf("It is a Scalene triangle.\n");

         if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) 
         {
              printf("It is also a Right-angled triangle.\n");
         }
    }
    else {
          printf("The triangle is NOT valid.\n");
    }
    return 0;
}