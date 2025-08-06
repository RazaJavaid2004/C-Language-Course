#include <stdio.h>

int main() {
    float hardness, carbonContent;
    int tensileStrength, grade;

    // Prompt user for input values
    printf("Enter the hardness of the steel: ");
    scanf("%f", &hardness);

    printf("Enter the carbon content of the steel: ");
    scanf("%f", &carbonContent);

    printf("Enter the tensile strength of the steel: ");
    scanf("%d", &tensileStrength);

    // Determine the grade based on the conditions
    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 10;
    } else if (hardness > 50 && carbonContent < 0.7) {
        grade = 9;
    } else if (carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 8;
    } else if (hardness > 50 && tensileStrength > 5600) {
        grade = 7;
    } else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }

    // Output the grade of the steel
    printf("The grade of the steel is: %d\n", grade);

    return 0;
}