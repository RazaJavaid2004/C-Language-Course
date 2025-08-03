#include <stdio.h>

int main() {
    int num, octalNum[100], i = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        octalNum[i] = num % 8;
        num /= 8;
        i++;
    }

    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNum[j]);
    }
    printf("\n");

    return 0;
}