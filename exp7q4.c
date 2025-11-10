#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    // Example: present address stored in hostel_address
    strcpy(addr.hostel_address, "Room 101, UPES Hostel, Kandoli");
    printf("Present Address: %s\n", addr.hostel_address);

    return 0;
}
