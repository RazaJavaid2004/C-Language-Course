/*
2. Write a program that ask the user to enter the total 'N' no of characters in user's name {First 
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of 
that 'N' no of characters using malloc or calloc function. Finally copy your full name in it that 
has already been taken from the user before
Dynamic Array = "Muhib Ahmed";
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter Number of Characters in Your Username: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left by scanf

    // Allocate memory for n characters + 1 for the null terminator
    char* username = (char*) malloc((n + 1) * sizeof(char));

    if (username == NULL) {
        printf("Memory Allocation failed \n");
        exit(0);
    } else {
        printf("Enter your username: ");
        fgets(username, n + 1, stdin); // Ensure fgets reads up to n characters
        username[strcspn(username, "\n")] = '\0'; // Remove the newline character

        // To simulate the task, let's assign a predefined name
        // strcpy(username, "Muhammad Raza"); // This overwrites user input, use accordingly

        printf("Your entered username: %s\n", username);
    }

    // Free the allocated memory
    free(username);

    return 0;
}