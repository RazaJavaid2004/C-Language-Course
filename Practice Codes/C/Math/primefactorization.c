#include <stdio.h>

void primefactors(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Prime Factors of %d are: ", n);

    primefactors(n);

    return 0;
}

void primefactors(int n) {
    while(n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    for(int i = 3; i < n / 2; i += 2) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if(n > 2) {
        printf("%d", n);
    }
}