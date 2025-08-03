#include <stdio.h>

void printfabonacciiterative(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printfabonacciiterative(n);
    
    return 0;
}

void printfabonacciiterative(int n) {
    int first = 0, second = 1, next;

    printf("Fabonacci sequence: %d \t%d \t", first, second);

    for(int i = 2; i < n; i++) {
        next = first + second;
        first = second;
        second = next;

        printf("%d \t", next);
    }
}