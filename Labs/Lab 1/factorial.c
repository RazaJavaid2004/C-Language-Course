#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    long long factorial = 1;
    for(int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}