#include <stdio.h>

void gstprice(float value);

int main() {
    int value;
    printf("Enter value: ");
    scanf("%d", &value);

    gstprice(value);

    printf("Value is %d", value);

    return 0;
}

void gstprice(float value) {
    value = value + (0.18 * value);
    printf("Final price is : %f \n", value);
    return value;
}