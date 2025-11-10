

#include <stdio.h>
#define MAX_EMP 100

typedef struct {
    char name[50];
    float basic_pay;
} Employee;

int main() {
    Employee emp[MAX_EMP];
    float da, gross;
    int i, n;

    printf("Enter number of employees (<=100): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name for employee %d: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter basic pay: ");
        scanf("%f", &emp[i].basic_pay);
    }

    printf("\nName\t\tGross Salary\n");
    for(i = 0; i < n; i++) {
        da = 0.52f * emp[i].basic_pay;
        gross = emp[i].basic_pay + da;
        printf("%s\t\t%.2f\n", emp[i].name, gross);
    }

    return 0;
}

