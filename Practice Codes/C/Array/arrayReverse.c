#include <stdio.h>

void reverse(int arr[], int n);
void print(int arr[], int n);

int main() {
    int arr[] = {1,2,3,4,5};
    
    reverse(arr, 5);
    print(arr, 5);
    return 0;
}

void reverse(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d \t", arr[i]);
    }
}