#include <stdio.h>
#include <math.h>

int main() {
    double pi = 0.0;
    int sign = 1;
    int precision_flags[4] = {0, 0, 0, 0};
    int terms = 0;
    double denominator = 1.0;

    printf("Terms\tπ Approximation\n");
    printf("--------------------------\n");

    while (precision_flags[3] == 0) {
        pi += sign * (4.0 / denominator);
        terms++;
        sign = -sign;
        denominator += 2.0;

        printf("%d\t%.10f\n", terms, pi);

        if (!precision_flags[0] && fabs(pi - 3.14) < 0.001) precision_flags[0] = terms;
        if (!precision_flags[1] && fabs(pi - 3.141) < 0.0001) precision_flags[1] = terms;
        if (!precision_flags[2] && fabs(pi - 3.1415) < 0.00001) precision_flags[2] = terms;
        if (!precision_flags[3] && fabs(pi - 3.14159) < 0.000001) precision_flags[3] = terms;
    }

    printf("\nTerms required for precision levels:\n");
    printf("3.14     : %d terms\n", precision_flags[0]);
    printf("3.141    : %d terms\n", precision_flags[1]);
    printf("3.1415   : %d terms\n", precision_flags[2]);
    printf("3.14159  : %d terms\n", precision_flags[3]);

    return 0;
}