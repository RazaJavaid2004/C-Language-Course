#include <stdio.h>

// Function prototypes
void display_steps(char coffee_type, int is_double);

int main() {
    char coffee_type;
    char double_size, manual;
    int is_double = 0;

    // Ask the user for coffee type
    printf("Enter coffee type (B for Black, W for White): ");
    scanf(" %c", &coffee_type);

    // Ask if the size is double
    printf("Is the cup size double? (Y for Yes, N for No): ");
    scanf(" %c", &double_size);
    if (double_size == 'Y' || double_size == 'y') {
        is_double = 1;
    }

    // Ask if the process is manual (though it doesn't change behavior in the code)
    printf("Is the coffee process manual? (Y for Yes, N for No): ");
    scanf(" %c", &manual);

    // Call the function to display steps
    display_steps(coffee_type, is_double);

    return 0;
}

// Function to display steps and compute coffee time
void display_steps(char coffee_type, int is_double) {
    int times[6];

    // Set the times for each operation based on coffee type
    if (coffee_type == 'W' || coffee_type == 'w') {
        times[0] = 15;
        times[1] = 15;
        times[2] = 20;
        times[3] = 2;
        times[4] = 4;
        times[5] = 20;
    } else if (coffee_type == 'B' || coffee_type == 'b') {
        times[0] = 20;
        times[1] = 20;
        times[2] = 25;
        times[3] = 15;
        times[4] = 0; // No milk for black coffee
        times[5] = 25;
    } else {
        printf("Invalid coffee type. Please enter B for Black or W for White.\n");
        return;
    }

    // Adjust times if size is double
    if (is_double) {
        for (int i = 0; i < 6; i++) {
            times[i] = (times[i] * 3) / 2; // Increase by 50%
        }
    }

    // Display the steps
    printf("\nCoffee Making Steps:\n");
    printf("1. Put Water: %d mins\n", times[0]);
    printf("2. Add Sugar: %d mins\n", times[1]);
    printf("3. Mix Well: %d mins\n", times[2]);
    printf("4. Add Coffee: %d mins\n", times[3]);

    if (coffee_type == 'W' || coffee_type == 'w') {
        printf("5. Add Milk: %d mins\n", times[4]);
    }

    printf("6. Mix Well Again: %d mins\n", times[5]);

    printf("\nYour coffee is ready!\n");
}