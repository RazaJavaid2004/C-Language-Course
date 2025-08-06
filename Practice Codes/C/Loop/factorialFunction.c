#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    int factorial;
    for(int i = 1; i <= n; i++) {
        return factorial *= i;
    }
}