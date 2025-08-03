/*
3. Using above question (2), resize that dynamic array of character and append the array with 
your studentId. That student id must be taken input from the user.
DynamicArray = "Muhib Ahmed"; // Before
DynamicArray = "K211234 Muhib Ahmed"; // After the text append
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;
    char studentId[20];

    // Ask the user to enter the total number of characters in their name
    printf("Enter Number of Characters in Your Name: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    // Allocate memory for the name
    char* username = (char*) malloc((n + 1) * sizeof(char));

    if (username == NULL) {
        printf("Memory Allocation failed\n");
        exit(0);
    } else {
        // Read the full name from the user
        printf("Enter your full name: ");
        fgets(username, n + 1, stdin);
        username[strcspn(username, "\n")] = '\0'; // Remove the newline character

        // Ask the user for their student ID
        printf("Enter your student ID: ");
        fgets(studentId, sizeof(studentId), stdin);
        studentId[strcspn(studentId, "\n")] = '\0'; // Remove the newline character

        // Calculate the new size needed for the dynamic array
        int new_size = strlen(studentId) + strlen(username) + 2; // +2 for space and null terminator

        // Resize the dynamic array
        char* updated_username = (char*) realloc(username, new_size * sizeof(char));
        if (updated_username == NULL) {
            printf("Memory Reallocation failed\n");
            free(username);
            exit(0);
        }

        // Concatenate the student ID and username
        memmove(updated_username + strlen(studentId) + 1, updated_username, strlen(updated_username) + 1); // Shift the username
        strncpy(updated_username, studentId, strlen(studentId));
        updated_username[strlen(studentId)] = ' '; // Add space between student ID and name

        // Print the updated array
        printf("Updated Username: %s\n", updated_username);

        // Free the allocated memory
        free(updated_username);
    }

    return 0;
}