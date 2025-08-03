#include <stdio.h>

void printarr(int arr[], int size);
void reversearr(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    printarr(arr, 6);
    reversearr(arr, 6);

    return 0;
}

void printarr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void reversearr(int arr[], int size) {
    int temp;
    for(int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    for(int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }
}