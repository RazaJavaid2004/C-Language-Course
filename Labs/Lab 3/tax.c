#include <stdio.h>

int main() {
    float salary, taxRate, tax, netSalary;

    // Prompt user for salary and tax rate
    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter the tax rate (as a percentage): ");
    scanf("%f", &taxRate);

    // Calculate tax and net salary
    tax = salary * (taxRate / 100);
    netSalary = salary - tax;

    // Display the results
    printf("Tax to be paid: %.2f\n", tax);
    printf("Salary after tax: %.2f\n", netSalary);

    return 0;
}