/*
The natural logarithm can be approximated by the following series.
If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    for (int n = 1; n <= 7; n++) {
        term = pow(-1, n+1) * pow(x - 1, n) / n;
        sum += term;
    }

    printf("Sum of the first seven terms of the series: %.7f\n", sum);

    return 0;
}