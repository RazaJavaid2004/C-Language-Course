#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;
    float average;

    // Prompt the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    // Read the numbers and store them in the array
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of positive numbers and their count
    for (i = 0; i < n; i++) {
        if (numbers[i] > 0) {
            sum += numbers[i];
            count++;
        }
    }

    // Calculate the average
    if (count != 0) {
        average = (float)sum / count;
    } else {
        average = 0;
    }

    // Display the sum and average of positive numbers
    printf("Sum of positive numbers: %d\n", sum);
    printf("Average of positive numbers: %.2f\n", average);

    return 0;
}