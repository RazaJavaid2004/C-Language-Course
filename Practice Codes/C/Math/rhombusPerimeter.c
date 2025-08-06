#include <stdio.h>

int main() {
    float l;
    printf("Enter Length of a side in cm: ");
    scanf("%f", &l);

    printf("Perimeter of Rhombus in cm is: %.2f", 4*l);

    return 0;
}