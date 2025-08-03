#include <stdio.h>

int printfabonaccirecursive(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d \t", printfabonaccirecursive(i));
    }

    return 0;
}

int printfabonaccirecursive(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return printfabonaccirecursive(n - 1) + printfabonaccirecursive(n - 2);
    }
}