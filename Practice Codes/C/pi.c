#include <stdio.h>
#include <math.h>

int main() {
    int n, terms;
    double pi_approx = 0.0;
    double term;
    double accuracy[] = {3.14, 3.141, 3.1415, 3.14159}; // Desired accuracies
    int found[4] = {0, 0, 0, 0}; // To track if we have found the accuracies

    // Print the header for the table
    printf("Term\tApproximation of Pi\n");
    printf("----------------------------\n");

    // Loop to calculate pi using Leibniz series
    for (terms = 1; terms <= 100000; terms++) {
        // Calculate the current term in the series
        term = (double)(pow(-1, terms-1)) / (2 * terms - 1);  // (-1)^(n-1) / (2n-1)
        pi_approx += term;

        // Multiply by 4 to get the approximation of pi
        pi_approx *= 4;

        // Print the approximation after this term
        printf("%d\t%.15f\n", terms, pi_approx);

        // Check if the approximation matches any desired accuracy
        for (int i = 0; i < 4; i++) {
            if (!found[i] && round(pi_approx * pow(10, 5 - i)) / pow(10, 5 - i) == accuracy[i]) {
                printf("\nFound %.5f after %d terms.\n", accuracy[i], terms);
                found[i] = 1;  // Mark as found
            }
        }

        // Stop once all accuracies are found
        if (found[0] && found[1] && found[2] && found[3]) {
            break;
        }
    }

    return 0;
}