#include <stdio.h>

int main() {
    int n;
    int result;

    printf("Enter Number: ");
    scanf("%d", &n);

    result = n << 1;
    printf("Left Shift: %d \n", result);

    result = n >> 1;
    printf("Right Shift: %d \n", result);
    
    return 0;
}