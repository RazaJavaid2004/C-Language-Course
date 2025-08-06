#include <stdio.h>

void printnumbers(int *arr, int n);

int main() {
    int arr[] = {1,2,3,4,5};
    int n;

    printf("Enter Number: ");
    scanf("%d", &n);

    printnumbers(arr, n);

    return 0;
}

void printnumbers(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
}