#include <stdio.h>
//call by value
void swap(int a, int b);
//call by reference
void _swap(int *a, int *b);

int main() {
    int a, b;
    printf("Enter a and b: \n");
    scanf("%d \n %d", &a, &b);

    swap(a, b);

    printf("a is: %d \n", a);
    printf("b is: %d \n", b);

    _swap(&a, &b);
    printf("a is: %d \n", a);
    printf("b is %d \n", b);

    return 0;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("a is: %d \n", a);
    printf("b is: %d \n", b);
}

void _swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}