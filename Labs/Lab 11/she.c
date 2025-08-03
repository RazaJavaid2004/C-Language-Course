/*
Write a program that finds the second highest number in a float type array of 20 elements 
using pointer.
*/

#include <stdio.h>

#define SIZE 20

void findSecondHighest(float *arr, int size, float *secondHighest) {
    float highest = -__FLT_MAX__;
    *secondHighest = -__FLT_MAX__;

    for (int i = 0; i < size; i++) {
        if (arr[i] > highest) {
            *secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > *secondHighest && arr[i] < highest) {
            *secondHighest = arr[i];
        }
    }
}

int main() {
    float arr[SIZE];
    float secondHighest;

    // Input the array elements
    printf("Enter 20 float numbers:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%f", &arr[i]);
    }

    // Find the second highest number
    findSecondHighest(arr, SIZE, &secondHighest);

    // Print the second highest number
    printf("The second highest number is: %.2f\n", secondHighest);

    return 0;
}