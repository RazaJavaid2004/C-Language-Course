#include <stdio.h>

int main() {
    int year;

    // Prompt user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using conditional operators
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("%d is a leap year.\n", year) : printf("%d is not a leap year.\n", year);

    return 0;
}