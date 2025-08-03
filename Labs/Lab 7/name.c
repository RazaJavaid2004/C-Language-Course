#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[100];

    // Prompt user for first name
    printf("Enter your first name: ");
    scanf("%s", firstName);

    // Prompt user for last name
    printf("Enter your last name: ");
    scanf("%s", lastName);

    // Concatenate first name and last name into full name
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    // Display the full name
    printf("Full name: %s\n", fullName);

    // Count and display the number of characters in the full name
    int length = strlen(fullName);
    printf("Number of characters in full name: %d\n", length);

    return 0;
}