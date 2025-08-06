#include <stdio.h>

float temperature(float celsius);

int main() {
    float celsius;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("Temperature in Fahrenheit is: %f", temperature(celsius));
    
    return 0;
}

float temperature(float celsius) {
    float fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    return fahrenheit;
}