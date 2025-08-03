/*
In shopping for a new house, you must consider several factors.
In this problem the initial cost of the house, the estimated annual fuel costs,
and the annual tax rate are available.
Write a program that will determine the total cost of a house after a five-year period
and run the program for each of the following sets of data.
To calculate the house cost, add the initial cost to the fuel cost for five years,
then add the taxes for five years.
Taxes for one year are computed by multiplying the tax rate by the initial cost.
Write and call a function that displays instructions to the program user.
*/
#include <stdio.h>

// Function prototypes
void displayInstructions();
double calculateTotalCost(double initial_cost, double annual_fuel_cost, double tax_rate);

int main() {
    double initial_cost, annual_fuel_cost, tax_rate;

    // Display instructions to the user
    displayInstructions();

    // Set of data 1
    initial_cost = 67000;
    annual_fuel_cost = 2300;
    tax_rate = 0.025;
    printf("Total cost for House 1: %.2f\n", calculateTotalCost(initial_cost, annual_fuel_cost, tax_rate));

    // Set of data 2
    initial_cost = 62000;
    annual_fuel_cost = 2500;
    tax_rate = 0.025;
    printf("Total cost for House 2: %.2f\n", calculateTotalCost(initial_cost, annual_fuel_cost, tax_rate));

    // Set of data 3
    initial_cost = 75000;
    annual_fuel_cost = 1850;
    tax_rate = 0.020;
    printf("Total cost for House 3: %.2f\n", calculateTotalCost(initial_cost, annual_fuel_cost, tax_rate));

    return 0;
}

// Function to display instructions to the user
void displayInstructions() {
    printf("This program calculates the total cost of a house after a five-year period.\n");
    printf("It takes into account the initial cost, annual fuel cost, and the annual tax rate.\n");
}

// Function to calculate the total cost of a house after five years
double calculateTotalCost(double initial_cost, double annual_fuel_cost, double tax_rate) {
    double total_fuel_cost = annual_fuel_cost * 5;
    double annual_tax = initial_cost * tax_rate;
    double total_tax = annual_tax * 5;
    double total_cost = initial_cost + total_fuel_cost + total_tax;
    return total_cost;
}