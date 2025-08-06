#include <stdio.h>

int main() {
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Odd lines: Print numbers
            for (int j = 1; j <= i; j++) {
                printf("%d", j);
            }
        } else {  // Even lines: Print alphabets
            for (int j = 1; j <= i; j++) {
                printf("%c", 'A' + j - 1);
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}