#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int fact = 1, i = 1;
    while(i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d: %d", n, fact);
}