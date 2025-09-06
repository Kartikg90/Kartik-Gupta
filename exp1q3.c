//Write a program that prompts the user to enter their name and age.

#include<stdio.h>
int main()
{
    char  name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);  //read a single word 

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Your name is %s and you are %d years old \n", name, age );
    return 0;

}