#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Prompt user for weight and height
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display the BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Determine the BMI category
    if (bmi < 15) {
        printf("BMI Category: Starvation\n");
    } else if (bmi >= 15 && bmi <= 17.5) {
        printf("BMI Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("BMI Category: Ideal\n");
    } else if (bmi >= 25 && bmi <= 25.9) {
        printf("BMI Category: Overweight\n");
    } else if (bmi >= 30 && bmi <= 30.9) {
        printf("BMI Category: Obese\n");
    } else {
        printf("BMI Category: Morbidly Obese\n");
    }

    return 0;
}