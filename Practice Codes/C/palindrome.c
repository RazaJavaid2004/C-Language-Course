#include <stdio.h>

int main() {
    int n, reversed = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    int original = n;

    // Reverse the number
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    // Check if the original number and the reversed number are the same
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}