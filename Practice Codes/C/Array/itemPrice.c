#include <stdio.h>

int main() {
    float price[3];

    printf("Enter Price of First, Second and Third Item: \n");
    scanf("%f \n %f \n %f", &price[0], &price[1], &price[2]);

    printf("GST Price of Item 1 is: %f \n", price[0] + (0.18 * price[0]));
    printf("GST Price of Item 2 is: %f \n", price[1] + (0.18 * price[1]));
    printf("GST Price of Item 3 is: %f \n", price[2] + (0.18 * price[2]));

    return 0;
}