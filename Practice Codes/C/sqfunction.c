#include <stdio.h>

int square(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Square of %d is: %d", n, square(n));

    return 0;
}

int square(int n) {
    return n * n;
}