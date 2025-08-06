#include <stdio.h>

int main() {
    int n;
    printf("Enter Number of Rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print increasing alphabets
        for (int k = 0; k <= i; k++) {
            printf("%c", 'A' + k);
        }
        // Print decreasing alphabets
        for (int l = i - 1; l >= 0; l--) {
            printf("%c", 'A' + l);
        }
        printf("\n");
    }
    return 0;
}