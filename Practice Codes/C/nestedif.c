#include <stdio.h>

int main() {
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("number is positive \n");

        if(number % 2 == 0) {
            printf("number is even \n");
        }
        else {
            printf("number is odd \n");
        }
    }
    else {
        printf("number is negative \n");
    }
    return 0;
}