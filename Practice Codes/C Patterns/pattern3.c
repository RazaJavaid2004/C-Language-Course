#include <stdio.h>

int main() {
    int n;
    printf("Enter Number of Lines: ");
    scanf("%d", &n);

    int nnb = n;
    int nsp = 1;

    for(int i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for(int i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");

    for(int j = 1; j <= n; j++) {
        int a = 1;
        int b = n - 1;
        for(int k = 1; k <= nnb; k++) {
            printf("%d", a);
            a++;
        }
        for(int l = 1; l <= nsp; l++) {
            printf(" ");
        }
        for(int m = 1; m <= nnb; m++) {
            printf("%d", b);
            b--;
        }
        nnb--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}