#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d", n, factorial(n));
    
    return 0;
}

int factorial(int n) {
    if(n == 1 || n == 0) {
        return 1;
    }
    int FactNm1 = factorial(n-1);
    int FactN = FactNm1 * n;
    return FactN;
}