#include <stdio.h>

int main() {
    int hours;
    float totalDistance = 0.0, distance, averageSpeed;

    // Prompt user for the number of hours
    do {
        printf("Enter the number of hours the car traveled (1 to 5): ");
        scanf("%d", &hours);
        if (hours < 1 || hours > 5) {
            printf("Invalid input. The number of hours must be between 1 and 5.\n");
        }
    } while (hours < 1 || hours > 5);

    // Collect distances for each hour
    for (int i = 1; i <= hours; i++) {
        do {
            printf("Enter the distance traveled in hour %d (must not be negative): ", i);
            scanf("%f", &distance);
            if (distance < 0) {
                printf("Invalid input. Distance must not be negative.\n");
            }
        } while (distance < 0);

        totalDistance += distance;
    }

    // Calculate average speed
    averageSpeed = totalDistance / hours;

    // Display the result
    printf("The average speed of the car is: %.2f miles per hour\n", averageSpeed);

    return 0;
}