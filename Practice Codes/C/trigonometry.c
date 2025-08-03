#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double angle, radians, sineValue, cosineValue, result;

    // Prompt user to enter an angle in degrees
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);

    // Convert the angle to radians
    radians = angle * (PI / 180.0);

    // Calculate sine and cosine values
    sineValue = sin(radians);
    cosineValue = cos(radians);

    // Calculate the sum of squares of sine and cosine
    result = (sineValue * sineValue) + (cosineValue * cosineValue);

    // Check if the result is approximately equal to 1
    if (fabs(result - 1.0) < 1e-9) {
        printf("The sum of the squares of sine and cosine of the angle is equal to 1.\n");
    } else {
        printf("The sum of the squares of sine and cosine of the angle is not equal to 1.\n");
    }

    return 0;
}