#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    
    int nsp = 1;
    int nst = 1;

    for(int i = 1; i <= n; i++) {
        int a = i - 1;
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i; k++) {
            printf("%c", 'A'-1+k);
        }
        for(int l = 1; l <= i-1; l++) {
            printf("%c", 'A'+l);
            a--;
        }
        printf("\n");
    }
    return 0;
}