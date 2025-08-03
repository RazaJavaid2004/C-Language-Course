#include <stdio.h>

int main() {
    float tax_rate, salary;
    printf("Enter Tax Rate in Percentage: ");
    scanf("%f", &tax_rate);

    printf("Enter Salary: ");
    scanf("%f", &salary);

    printf("Salary after cutting tax is %f", (tax_rate / 100) * salary);

    return 0;
}