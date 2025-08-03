#include <stdio.h>

void swapped(int* aptr, int* bptr, int* cptr);

int main() {
    int a = 1, b = 2, c = 3;
    printf("Values of a, b, c are: \n%d \n%d \n%d \n", a, b, c);
    swapped(&a, &b, &c);
    return 0;
}

void swapped(int* aptr, int* bptr, int* cptr) {
    int temp = *cptr;
    *cptr = *aptr;
    *aptr = temp;
    printf("After Swapping \n");
    printf("Values of a, b, c are: \n%d \n%d \n%d", *aptr, *bptr, *cptr);
}