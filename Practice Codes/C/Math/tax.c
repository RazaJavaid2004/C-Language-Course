#include <stdio.h>

int main() {
    int salary;
    float tax;

    printf("Enter Salary: ");
    scanf("%d", &salary);

    if(salary < 2500) tax = 0;
    else if(salary >= 2500 && salary <= 5000) tax = 0.05;
    else if(salary > 5000 && salary <= 1000) tax = 0.2;
    else  tax = 0.3;

    tax *= salary;

    printf("Tax on Your Salary: %.2f \n", tax);
    printf("Salary after Paying Tax: %.2f \n", salary - tax);

    return 0;
}