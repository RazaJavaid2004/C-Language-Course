/*
Write a program that does the following: 
a. Ask the user to type the size of the array. 
b. Use malloc or calloc to create an integer array of that size. 
c. Use the function read to read the numbers. 
d. Display the sum and average or these numbers. Then display the array sorted. 
 Show 2 numbers after the floating point in the average. 
e. Free the allocated memory.
*/

#include <stdio.h>
#include <stdlib.h>

void read(int *arr, int size) {
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    int *arr = (int *) malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read numbers into the array
    read(arr, size);

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = (float)sum / size;

    // Display sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    // Sort the array
    sort(arr, size);

    // Display the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}