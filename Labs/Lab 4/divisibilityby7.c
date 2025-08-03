#include <stdio.h>

int main() {
    long long num, temp;
    int lastDigit, doubledLastDigit, remainder;
    
    printf("Enter an integer: ");
    scanf("%lld", &num);

    while (num >= 10 || num <= -10) {
        lastDigit = num % 10;
        doubledLastDigit = 2 * lastDigit;
        temp = num / 10;
        num = temp - doubledLastDigit;
        printf("Intermediate result: %lld\n", num);
    }

    if (num == 7 || num == -7 || num == 0) {
        printf("The number is divisible by 7.\n");
    } else {
        printf("The number is not divisible by 7.\n");
    }

    return 0;
}