/*
Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to
determine the population at the end of each year in the last decade.
*/

#include <stdio.h>

int main() {
    double population = 100000;
    double rate = 0.10;

    printf("Year\tPopulation\n");
    for (int year = 1; year <= 10; year++) {
        population *= (1 + rate);
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}