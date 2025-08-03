#include <stdio.h>

typedef struct complex {
    int real;
    int img;
} comp;

void addition(comp a, comp b, comp sum);
void subtraction(comp a, comp b, comp diff);
void multiplication(comp a, comp b, comp prod);

int main() {
    comp a, b, sum, diff, prod;

    printf("Enter Real and Imaginary Parts of a: \n");
    scanf("%d \n%d", &a.real, &a.img);

    printf("Enter Real and Imaginary Parts of b: \n");
    scanf("%d \n%d", &b.real, &b.img);

    addition(a, b, sum);
    subtraction(a, b, diff);
    multiplication(a, b, prod);

    return 0;
}

void addition(comp a, comp b, comp sum) {
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    printf("Sum: %d + %di \n", sum.real, sum.img);
}

void subtraction(comp a, comp b, comp diff) {
    diff.real = a.real - b.real;
    diff.img = a.img - b.img;
    printf("Diff: %d + %di \n", diff.real, diff.img);
}

void multiplication(comp a, comp b, comp prod) {
    prod.real = a.real * b.real;
    prod.img = a.img * b.img;
    printf("Product: %d + %di \n", prod.real, prod.img);
}