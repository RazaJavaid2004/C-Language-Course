/*
6. Declare an array of int at least 10 elements long. Fill in the array with the square of its index 
using array syntax, a[i] = i * i ;. Print out the array using pointer syntax *(a + i).
*/

#include <stdio.h>

int main() {
    // Declare an array of 10 integers
    int arr[10];

    // Fill the array with the square of its index using array syntax
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }

    // Print out the array using pointer syntax
    printf("The elements of the array are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    return 0;
}