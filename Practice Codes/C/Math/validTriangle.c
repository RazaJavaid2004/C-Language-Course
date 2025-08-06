#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("Enter Three sides of Triangle: \n");
    scanf("%d \n%d \n%d", &side1, &side2, &side3);

    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("Triangle is Valid");
    }
    else {
        printf("Triangle is not valid");
    }
    return 0;
}