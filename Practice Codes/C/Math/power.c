#include <stdio.h>

float power(float x, int y);

int main() {
    float x;
    int y;

    printf("Enter Base: ");
    scanf("%f", &x);


    printf("Enter Exponent: ");
    scanf("%d", &y);

    printf("%.2f raised to the power %d is: %.2f\n", x, y, power(x, y));


    return 0;
}

float power(float x, int y) {
    float b = 1;
    
    for(int i = 1; i <= y; i++) b *= x;

    return b;
}