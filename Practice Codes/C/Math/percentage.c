#include <stdio.h>

float percentage(float science, float math, float english);

int main() {
    float science = 87;
    float math = 98;
    float english = 93;

    printf("Percentage is: %.2f", percentage(science, math, english));

    return 0;
}

float percentage(float science, float math, float english) {
    float Percent = (science + math + english) / 300 * 100;
    return Percent;
}