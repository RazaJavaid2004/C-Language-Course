#include <stdio.h>

int main() {
    float r;
    printf("Enter Radius of Semi-Circle: ");
    scanf("%f", &r);

    printf("Area of Semi-Circle is: %.2f", 3.14*0.5*r*r);

    return 0;
}