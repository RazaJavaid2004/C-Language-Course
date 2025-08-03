#include <stdio.h>

struct complex {
    int real;
    int img;
};

void printsum(struct complex a, struct complex b, struct complex sum);

int main() {
    struct complex a;
    struct complex b;
    struct complex sum = {0};

    printf("For a: \n");
    printf("Enter Real part: ");
    scanf("%d", &a.real);

    printf("Enter Imaginary part: ");
    scanf("%d", &a.img);

    printf("For b: \n");
    printf("Enter Real part: ");
    scanf("%d", &b.real);

    printf("Enter Imaginary part: ");
    scanf("%d", &b.img);

    printf("First Complex Number: %d + %di \n", a.real, a.img);
    printf("Second Complex Number: %d + %di \n", b.real, b.img);

    printsum(a, b, sum);

    return 0;
}

void printsum(struct complex a, struct complex b, struct complex sum) {
    sum.real = a.real + b.real;
    sum.img = a.img + b.real;

    printf("Sum is: %d + %di", sum.real, sum.img);
}