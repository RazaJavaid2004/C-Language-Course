#include <stdio.h>
//calling by reference
void area(int a, int b, int r, int *square_area, int *rectangle_area, int *circle_area);

int main() {
    int a, b, r, square_area, rectangle_area, circle_area;

    printf("Enter a,b,r: \n");
    scanf("%d\n %d\n %d", &a, &b, &r);

    area(a, b, r, &square_area, &rectangle_area, &circle_area);

    printf("Square = %d, Rectangle = %d, Circle = %d", square_area, rectangle_area, circle_area);

    return 0;
}

void area(int a, int b, int r, int *square_area, int *rectangle_area, int *circle_area) {
    *square_area = a * a;
    *rectangle_area = a * b;
    *circle_area = 3.14 * r * r;
}