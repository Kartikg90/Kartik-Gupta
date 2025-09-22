//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>
int main() {
    int years = 10;
    float population = 100000;
    int i;

    printf("Year\tPopulation\n");
    for(i = 1; i <= years; ++i) {
        population = population * 1.10;
        printf("%2d\t%.0f\n", i, population);
    }

    return 0;
}