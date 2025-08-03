#include <stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm2 + fibNm1;
    return fibN;
}