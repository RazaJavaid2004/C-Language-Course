#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int num, sum = 0, temp;

    // Prompt user to enter a 5-digit number
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Check if the number is a 5-digit number
    if (num < 10000 || num > 99999) {
        printf("Error: The number entered is not a 5-digit number.\n");
        return 1;
    }

    // Calculate the sum of the digits
    temp = num;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    // Check if the sum of digits is even or odd
    if (sum % 2 == 0) {
        // Sum of digits is even, check if the number is prime
        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    } else {
        // Sum of digits is odd, check if the number is a palindrome
        if (isPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }
    }

    return 0;
}