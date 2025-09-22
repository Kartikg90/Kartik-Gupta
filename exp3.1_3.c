#include <stdio.h>
int main()
{
    int a, x1, y1, x2, y2, x3, y3;
    printf("Enter the first point(x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the second point(x2,y2): ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the thrid point(x3,y3): ");
    scanf("%d %d", &x3, &y3);

    a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (a == 0)
        printf("The points are collinear");
    else
        printf("The points are not collinear");

    return 0;

}