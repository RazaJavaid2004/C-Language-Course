#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n/2+1 || j == n/2+1) printf("%c ", 'A'+i);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}