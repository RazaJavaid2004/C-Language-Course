#include <stdio.h>

int main() {
    int n;
    printf("Enter Number of Lines: ");
    scanf("%d", &n);

    int nsp = 1;
    int nnb = n;

    for(int i = 1; i <= 2 * n + 1; i++) {
        printf("%d", i);
    }
    printf("\n");
    
    for(int j = 1; j <= n; j++) {
        int a = 1; // if a is declared outside of loop then next line will not start with 1;
        for(int k = 1; k <= nnb; k++) {
            printf("%d", a);
            a++;
        }
        for(int l = 1; l <= nsp; l++) {
            printf(" ");
            a++;
        }
        for(int m = 1; m <= nnb; m++) {
            printf("%d", a);
            a++;
        }
        nnb--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}