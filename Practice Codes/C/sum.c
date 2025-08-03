#include <stdio.h>
//sum of a and b
int main() {
    int a, b;
    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum is : %d", sum);
    return 0;
}