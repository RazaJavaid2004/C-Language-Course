#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846 // Define PI

int main() {
    double x = 2.0, y = 4.0;
    int n = -3;

    // Basic arithmetic functions
    printf("fabs(-2.5) = %f\n", fabs(-2.5)); // Absolute value
    printf("fmod(5.3, 2.1) = %f\n", fmod(5.3, 2.1)); // Remainder of division

    // Exponential and logarithmic functions
    printf("exp(1) = %f\n", exp(1)); // Exponential
    printf("log(10) = %f\n", log(10)); // Natural logarithm
    printf("log10(1000) = %f\n", log10(1000)); // Base-10 logarithm
    printf("pow(2, 3) = %f\n", pow(2, 3)); // Power
    printf("sqrt(16) = %f\n", sqrt(16)); // Square root

    // Trigonometric functions
    printf("sin(M_PI/2) = %f\n", sin(M_PI / 2)); // Sine
    printf("cos(M_PI) = %f\n", cos(M_PI)); // Cosine
    printf("tan(M_PI/4) = %f\n", tan(M_PI / 4)); // Tangent

    // Hyperbolic functions
    printf("sinh(1) = %f\n", sinh(1)); // Hyperbolic sine
    printf("cosh(1) = %f\n", cosh(1)); // Hyperbolic cosine
    printf("tanh(1) = %f\n", tanh(1)); // Hyperbolic tangent

    // Angle conversion
    printf("degrees(M_PI) = %f\n", (M_PI * 180.0 / M_PI)); // Radians to degrees
    printf("radians(180) = %f\n", (180 * M_PI / 180)); // Degrees to radians

    // Error and gamma functions
    printf("erf(1) = %f\n", erf(1)); // Error function
    printf("tgamma(5) = %f\n", tgamma(5)); // Gamma function

    // Ceiling, floor, and rounding functions
    printf("ceil(2.3) = %f\n", ceil(2.3)); // Ceiling
    printf("floor(2.7) = %f\n", floor(2.7)); // Floor
    printf("round(2.5) = %f\n", round(2.5)); // Round

    // Miscellaneous functions
    printf("hypot(3, 4) = %f\n", hypot(3, 4)); // Hypotenuse
    printf("cbrt(27) = %f\n", cbrt(27)); // Cube root

    return 0;
}