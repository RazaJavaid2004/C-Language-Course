#include <stdio.h>
#include <math.h>
//Half Life
int main() {
    double N, G, H = 5.272, C = exp(-0.693), A;
    printf("Enter the Orignal Mass of Sample: \n");
    scanf("%lf", &G);

    printf("Enter the Number of Years: \n");
    scanf("%lf", &N);

    A = G * pow(C, N / H);

    printf("The Amount of Sample after %.2lf years is: %.2lf grams", N, A);

    return 0;
}