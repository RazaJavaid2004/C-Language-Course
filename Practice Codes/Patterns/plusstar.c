#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == n/2+1 || i == n/2+1) printf("* "); // if && is used
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}