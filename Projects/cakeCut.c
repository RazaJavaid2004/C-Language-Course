#include <stdio.h>
//Number of cuts to divide a cake
int mincuts(int n);

int main() {
    int n;
    printf("Enter Number of Cuts: ");
    scanf("%d", &n);

    printf("Number of Cuts: %d", mincuts(n));

    return 0;
}

int mincuts(int n) {
    if(n == 1) {
        return 0;
    }
    
    return (n % 2 == 0) ? n / 2 : n;
}