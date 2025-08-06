#include <stdio.h>

int sum(int num1, int num2);

int main() {
    int num1, num2;

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Sum is %d: ", sum(num1, num2));

    return 0;
}

int sum(a, b) {
    return a + b;
}