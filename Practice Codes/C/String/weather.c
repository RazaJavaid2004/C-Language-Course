#include <stdio.h>

int main() {
    int num;
    printf("Enter Temperature in Celsius: ");
    scanf("%d", &num);

    if(num > 45) {
        printf("Hot");
    }
    else if(num >= 30 && num <= 45) {
        printf("Normal");
    }
    else if(num < 30) {
        printf("Cold");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}