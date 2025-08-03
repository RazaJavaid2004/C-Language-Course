#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    originalNum = num;
    /*
    This loop processes each digit of the number:
    remainder = originalNum % 10; extracts the last digit.
    result += remainder * remainder * remainder; adds the cube of the digit to result.
    originalNum /= 10; removes the last digit from originalNum.
    */
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}