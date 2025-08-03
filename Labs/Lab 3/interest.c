#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input for Principal
    printf("Enter the principal amount (100 Rs. to 1,000,000 Rs.): ");
    scanf("%f", &principal);
    while (principal < 100 || principal > 1000000) {
        printf("Invalid input! Principal must be between 100 and 1,000,000 Rs.\n");
        printf("Enter the principal amount (100 Rs. to 1,000,000 Rs.): ");
        scanf("%f", &principal);
    }

    // Input for Rate of Interest
    printf("Enter the rate of interest (5%% to 10%%): ");
    scanf("%f", &rate);
    while (rate < 5 || rate > 10) {
        printf("Invalid input! Rate of interest must be between 5%% and 10%%.\n");
        printf("Enter the rate of interest (5%% to 10%%): ");
        scanf("%f", &rate);
    }

    // Input for Time Period
    printf("Enter the time period in years (1 to 10 years): ");
    scanf("%f", &time);
    while (time < 1 || time > 10) {
        printf("Invalid input! Time period must be between 1 and 10 years.\n");
        printf("Enter the time period in years (1 to 10 years): ");
        scanf("%f", &time);
    }

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    // Output the result
    printf("The calculated simple interest is: %.2f Rs.\n", interest);

    return 0;
}
