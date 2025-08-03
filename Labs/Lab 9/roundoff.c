/*
Write a program that takes a positive number with a fractional part and rounds it to two decimal 
places. For example, 32.4851 would round to 32.49, and 32.4431 would round to 32.44.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double number;
    
    // Input the number from the user
    printf("Enter a positive number with a fractional part: ");
    scanf("%lf", &number);

    // Round the number to two decimal places
    double rounded_number = round(number * 100) / 100;

    // Display the rounded number
    printf("The number rounded to two decimal places is: %.2f\n", rounded_number);

    return 0;
}