#include <stdio.h>

int main() {
    int num1, num2, op;

    printf("Enter First and Second Number: ");
    scanf("%d \n%d", &num2, &num2);

    scanf("%d", &op);

    switch(op) {
        case 1:
        printf("%d", num1 + num2);
        break;
        case 2:
        printf("%d", num1 - num2);
        break;
        case 3:
        printf("%d", num1 * num2);
        break;
        case 4:
        printf("%d", num1 / num2);
        break;
        case 5:
        printf("%d", num1 % num2);
        break;
        default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}