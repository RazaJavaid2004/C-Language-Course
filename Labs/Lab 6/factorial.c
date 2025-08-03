#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; // To handle large factorial values

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the input number is negative
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return 1; // Exit the program
    }

    // Calculate factorial
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Display the result
    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}