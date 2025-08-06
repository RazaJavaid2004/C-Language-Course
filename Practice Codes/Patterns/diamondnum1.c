#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int nsp = n / 2;
    int digs = 1;
    int ml = n / 2 + 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= nsp; j++) {
            printf(" ");
        }
        for(int k = 1; k <= digs; k++) {
            printf("%d", k);
        }
        if(i <= ml) {
            nsp--;
            digs += 2;
        } else {
            nsp++;
            digs -= 2;
        }
        printf("\n");
    }
    return 0;
}