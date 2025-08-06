#include <stdio.h>
//call by value
void square(int n);
//call by reference
void _square(int *n);

int main() {
    int num;
    
    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Number is: %d \n", num);

    square(num);

    _square(&num);

    printf("Number is: %d \n", num);

    return 0;
}

void square(int n) {
    n *= n;
    printf("Square of Number is: %d \n", n);
}

void _square(int *n) {
    *n *= *n;
    printf("Square of Number is: %d \n", *n);
}