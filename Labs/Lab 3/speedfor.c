#include <stdio.h>

int main() {
    int hours;
    float distances[5], totalDistance = 0.0, averageSpeed;

    // Input for hours with a for loop
    for (hours = 0; hours < 1 || hours > 5; ) {
        printf("Enter the time the car traveled (1 to 5 hours): ");
        scanf("%d", &hours);
    }

    // Input for distances with a for loop
    for (int i = 0; i < hours; i++) {
        do {
            printf("Enter the distance traveled in hour %d (non-negative): ", i + 1);
            scanf("%f", &distances[i]);
            if (distances[i] < 0) {
                printf("Distance cannot be negative. Please enter again.\n");
            }
        } while (distances[i] < 0);
        totalDistance += distances[i];
    }

    // Calculate average speed
    averageSpeed = totalDistance / hours;

    // Output the result
    printf("Total Distance: %.2f miles\n", totalDistance);
    printf("Average Speed: %.2f miles per hour\n", averageSpeed);

    return 0;
}