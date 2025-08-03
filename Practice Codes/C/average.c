#include <stdio.h>
//average of three numbers.
int main() {
    float a, b, c;
    printf("enter a");
    scanf("%f", &a);
    printf("enter b");
    scanf("%f", &b);
    printf("enter c");
    scanf("%f", &c);
    printf("Average is :%f", (a + b + c) / 3);
    return 0;
}