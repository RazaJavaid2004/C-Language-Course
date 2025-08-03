#include <stdio.h>

int main() {
    int num1, num2, temp;
    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("First Number is: %d \n", num1);
    printf("Second Number is: %d \n", num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swaping:- \n");
    printf("First Number is: %d \n", num1);
    printf("Second Number is: %d \n", num2);

    return 0;
}