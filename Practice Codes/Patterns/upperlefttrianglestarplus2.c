#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2*i-1; j++) { // a += 2 == 2*n-1
            printf("*");
        }
        printf("\n");
    }
    return 0;
}