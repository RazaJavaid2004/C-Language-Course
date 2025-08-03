#include <stdio.h>

int main() {
    int n, i;
    printf("Enter Number of Elements in Array: ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    printf("Sum of Elements in array: %d", sum);

    return 0;
}