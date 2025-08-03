#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Declare an array to store Fibonacci terms
    int fib[n];

    // Initialize the first two terms
    fib[0] = 0;
    fib[1] = 1;

    // Generate the Fibonacci series
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci series
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}