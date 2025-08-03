/*
When interest compounds q times per year at an annual rate of r % for n years, the principal p compounds to an amount a as per the following
formula a = p (1 + r / q) nq
Write a program to read 10 sets of p, r, n & q and calculate the corresponding a's.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, a;
    int n, q;

    for (int i = 1; i <= 10; i++) {
        printf("Enter the values for p, r, n, and q (separated by spaces): ");
        scanf("%lf %lf %d %d", &p, &r, &n, &q);

        a = p * pow((1 + r / q), (n * q));
        printf("Set %d: Compounded amount a = %.2f\n", i, a);
    }

    return 0;
}