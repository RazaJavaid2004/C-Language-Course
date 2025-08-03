/*
Write a function that prints all the unique values from an array and the number of times each 
value occurred. The main function takes a size of array as input and generates a random integer 
array with name “array1”. Random number limit must be between 0 and 10. The ‘main’ function 
calls a function with the name as “CountFrequency( )” that will find the occurrence of each value 
in array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void CountFrequency(int *array, int size) {
    int count[11] = {0}; // Initialize a count array to store the frequency of numbers 0 to 10

    // Count the frequency of each element in the array
    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    // Print the unique values and their frequencies
    printf("Unique values and their occurrences:\n");
    for (int i = 0; i <= 10; i++) {
        if (count[i] > 0) {
            printf("Value %d occurs %d times\n", i, count[i]);
        }
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    int *array1 = (int *)malloc(size * sizeof(int));
    if (array1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Generate random integers between 0 and 10 and fill the array
    printf("Generated array:\n");
    for (int i = 0; i < size; i++) {
        array1[i] = rand() % 11; // Random number between 0 and 10
        printf("%d ", array1[i]);
    }
    printf("\n");

    // Call the CountFrequency function
    CountFrequency(array1, size);

    // Free the allocated memory
    free(array1);

    return 0;
}