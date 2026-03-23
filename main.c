#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int units;
    char status[50];

    printf("Enter student name: ");
    
    // Read full name (with spaces)
    fgets(name, sizeof(name), stdin);

    // Remove newline from fgets
    name[strcspn(name, "\n")] = 0;

    printf("Enter number of registered units: ");
    
    if (scanf("%d", &units) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    if (units > 7) {
        strcpy(status, "Overload - Approval Required");
    } else {
        strcpy(status, "Registration Accepted");
    }

    printf("\n--- Registration Summary ---\n");
    printf("Student Name: %s\n", name);
    printf("Units: %d\n", units);
    printf("Status: %s\n", status);

    return 0;
}