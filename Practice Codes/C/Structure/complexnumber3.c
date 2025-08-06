#include <stdio.h>

typedef struct complex_number {
    int real;
    int img;
} complex;

complex add(complex a, complex b);

int main() {
    complex a, b;

    printf("Enter Real and Imaginary Parts of a: \n");
    scanf("%d\n%d", &a.real, &a.img);

    printf("Enter Real and Imaginary Parts of b: \n");
    scanf("%d\n%d", &b.real, &b.img);

    printf("Complex Number 1: %d + %di \n", a.real, a.img);
    printf("Complex Number 2: %d + %di \n", b.real, b.img);

    add(a, b);
    return 0;    
}

complex add(complex a, complex b) {
    complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    
    printf("Sum: %d + %di", sum.real, sum.img);
}