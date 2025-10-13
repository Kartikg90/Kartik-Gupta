// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

int global_var = 100; // Global variable

void func() {
    int local_var = 50; // Local variable
    printf("Inside func(): local_var = %d\n", local_var);
    printf("Inside func(): global_var = %d\n", global_var);
}

int main() {
    // printf("In main(): local_var = %d\n", local_var); // Error: local_var is not accessible here
    printf("In main(): global_var = %d\n", global_var); // Works fine
    func();
    return 0;
}
