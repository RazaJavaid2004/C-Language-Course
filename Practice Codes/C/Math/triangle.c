#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter Three Sides of Triangle: \n");
    scanf("%d \n%d \n%d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3) {
        printf("Equilateral Triangle");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles Triangle");
    }
    else {
        printf("Scalene Triangle");
    }

    if(side1 * side1 + side2 * side2 == side3 * side3 ||
       side2 * side2 + side3 * side3 == side1 * side1 ||
       side1 * side1 + side3 * side3 == side2 * side2) {
        printf("Right Angled Triangle");
    }
    return 0;
}