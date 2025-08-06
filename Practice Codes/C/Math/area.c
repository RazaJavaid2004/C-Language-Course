#include <stdio.h>

float squarearea(float side);
float rectanglearea(float a, float b);
float circlearea(float radius);
// Calling Area of Circle
// calling by value
int main() {
    float radius;
    printf("Enter Radius: ");
    scanf("%f", &radius);

    printf("Area of Circle is: %f", circlearea(radius));

    return 0;
}

float squarearea(float side) {
    return side * side;
}

float rectanglearea(float a, float b) {
    return a * b;
}

float circlearea(float radius) {
    return 3.14 * radius * radius;
}