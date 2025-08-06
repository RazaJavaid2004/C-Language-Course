#include <stdio.h>

int main() {
    int n;
    int sum =  0;

    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        sum += (n * i);
    }

    printf("Sum of Table of %d is: %d", n, sum);

    return 0;
}