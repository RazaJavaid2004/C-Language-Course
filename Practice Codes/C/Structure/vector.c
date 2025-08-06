#include <stdio.h>

struct vector {
    int x;
    int y;
    int z;
};

void printsum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    struct vector v1;
    struct vector v2;
    struct vector sum = {0};

    printf("For First Vector: \n");
    printf("Enter x: ");
    scanf("%d", &v1.x);

    printf("Enter y: ");
    scanf("%d", &v1.y);

    printf("Enter z: ");
    scanf("%d", &v1.z);

    printf("For Second Vector: \n");
    printf("Enter x: ");
    scanf("%d", &v2.x);

    printf("Enter y: ");
    scanf("%d", &v2.y);

    printf("Enter z: ");
    scanf("%d", &v2.z);

    printf("First Vector: %di + %dj + %dk \n", v1.x, v1.y, v1.z);
    printf("Second Vector: %di + %dj + %dk \n", v2.x, v2.y, v2.z);

    printsum(v1, v2, sum);
    return 0;
}

void printsum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    sum.z = v1.z + v2.z;

    printf("Sum is: %di + %dj + %dk", sum.x, sum.y, sum);
}