#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c) {
            printf("The maximum is: %d\n", a);
        } else {
            printf("The maximum is: %d\n", c);
        }
    }
    else {
        if(b > c) {
            printf("The maximum is: %d\n", b);
        } else {
            printf("The maximum is: %d\n", c);
        }
    }

    return 0;
}