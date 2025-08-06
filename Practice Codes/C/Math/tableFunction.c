#include <stdio.h>

void printTable(int n);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printTable(n);

    return 0;
}

void printTable(int n) {
    for(int i=1; i<=10; i++) {
        printf("%d \n", n * i);
    }
}