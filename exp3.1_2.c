// WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts)

#include <stdio.h>
int main()
{
    float w, h, BMI;
    printf("Enter your weight in kg: ");
    scanf("%f", &w);
    printf("Enter your height in meters: ");
    scanf("%f", &h);

    BMI = w / (h * h);

    printf("Your BMI is %.2f\n", BMI);

    if (BMI < 15)
        printf("You are Starved.\n");
    else if (BMI > 15 && BMI <= 17.5)
        printf("You are Anorexic.\n");
    else if (BMI > 17.5 && BMI <= 18.5)
        printf("You are Underweight.\n");
    else if (BMI > 18.5 && BMI <= 24.9)
        printf("You have an Ideal weight.\n");
    else if (BMI >= 25 && BMI <= 29.9)
        printf("You are Overweight.\n");
    else if (BMI >= 30 && BMI <= 39.9)
        printf("You are Obese.\n");
    else if (BMI >= 40)
        printf("You are Morbidly Obese.\n");

    return 0;
}