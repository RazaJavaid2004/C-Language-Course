#include <stdio.h>
//perimeter of rectangle
int main() {
    float a, b;
    printf("enter a");
    scanf("%f", &a);

    printf("enter b");
    scanf("%f", &b);

    printf("Perimeter of Rectangle is : %f", 2 * (a + b));
    return 0;
}