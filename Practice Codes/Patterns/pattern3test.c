#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print increasing part
        for (int j = 1; j <= n - i; j++) {
            printf("%d", j);
        }
        // Print spaces in the middle
        for (int j = 0; j < 2 * i - 1; j++) {
            printf(" ");
        }
        // Print decreasing part
        if (i != 0) {
            for (int j = n - i; j >= 1; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = n - i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}
