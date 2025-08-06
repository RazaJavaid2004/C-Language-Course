#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i+j == n-1) printf("%c", 'A'+i);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}