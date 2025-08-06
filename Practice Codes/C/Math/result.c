#include <stdio.h>

int main() {
    int number;
    printf("enter number (0-100) : ");
    scanf("%d", &number);

    if(number >= 30) {
        printf("Pass \n");
    }
    else if(number < 30) {
        printf("Fail \n");
    }
    else {
        printf("Invalid Number \n");
    }
    return 0;
}