#include <stdio.h>

int main() {
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;  // x = 0

    printf("x is: %d \n", x);
    printf("*ptr is: %d \n", *ptr);

    *ptr += 5; // x += 5

    printf("x is: %d \n", x);
    printf("*ptr is: %d \n", *ptr);

    (*ptr)++; // x++

    printf("x is: %d \n", x);
    printf("*ptr is: %d \n", *ptr);

    return 0;
}
