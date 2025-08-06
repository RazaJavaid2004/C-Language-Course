#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int fibArray[n];
    for (int i = 0; i < n; i++) {
        fibArray[i] = fibonacci(i);
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibArray[i]);
    }
    return 0;
}