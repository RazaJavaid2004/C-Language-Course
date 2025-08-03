/*
5. Write a program that implements the SortFunction that takes argument pointer to an array, 
size of the array and the order in which it is going to be sort. Such as, 1 for Asscending order 
and 2 for Descending orde. Finally, print this array in Main() to check. 
void SortFunction(int *arr, int *size, int order);
*/

#include <stdio.h>

// Function to sort the array
void SortFunction(int *arr, int size, int order) {
    int i, j, temp;

    // Ascending order
    if (order == 1) {
        for (i = 0; i < size - 1; i++) {
            for (j = 0; j < size - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    // Descending order
    else if (order == 2) {
        for (i = 0; i < size - 1; i++) {
            for (j = 0; j < size - 1 - i; j++) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int size, i, order;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the order: 1 for ascending, 2 for descending
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &order);

    // Sort the array
    SortFunction(arr, size, order);

    // Print the sorted array
    printf("The sorted array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}