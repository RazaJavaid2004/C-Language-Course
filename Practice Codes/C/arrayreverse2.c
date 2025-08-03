#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the Elements of array: \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    printf("Reversed Array is: \n");

    for(i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }

    return 0;
}