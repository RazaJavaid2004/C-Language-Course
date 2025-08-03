#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter principal amount (100 Rs. to 1,000,000 Rs.): ");
    scanf("%f", &principal);
    if (principal < 100 || principal > 1000000) {
        printf("Principal amount must be between Rs.100 and Rs.1,000,000.\n");
        return 1;
    }


    printf("Enter rate of interest (5%% to 10%%): ");
    scanf("%f", &rate);
    if (rate < 5 || rate > 10) {
        printf("Rate of interest must be between 5%% and 10%%.\n");
        return 1;
    }

    printf("Enter time period (1 to 10 years): ");
    scanf("%f", &time);
    if (time < 1 || time > 10) {
        printf("Time period must be between 1 and 10 years.\n");
        return 1;
    }

    interest = (principal * rate * time) / 100;

    printf("Simple Interest is: %.2f Rs.\n", interest);

    return 0;
}
