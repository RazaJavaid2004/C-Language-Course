#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check password validity
int isValidPassword(char password[]) {
    int hasNumber = 0, hasUpper = 0, hasLower = 0;
    for (int i = 0; i < strlen(password); i++) {
        if (isdigit(password[i])) hasNumber = 1;
        if (isupper(password[i])) hasUpper = 1;
        if (islower(password[i])) hasLower = 1;
    }
    return (hasNumber && hasUpper && hasLower && strlen(password) == 6);
}

int main() {
    char username[6], password[7];
    char inputUsername[6], inputPassword[7];
    
    // Registration
    while (1) {
        printf("Enter a username (5 alphabets): ");
        scanf("%s", username);
        
        if (strlen(username) != 5) {
            printf("Username must be 5 alphabets long.\n");
            continue;
        }
        break;
    }
    
    while (1) {
        printf("Enter a password (6 characters, 1 numeric, 1 capital, 1 small letter): ");
        scanf("%s", password);
        
        if (!isValidPassword(password)) {
            printf("Password must be 6 characters long with at least 1 numeric, 1 capital, and 1 small letter.\n");
            continue;
        }
        break;
    }
    
    printf("Account Created Successfully.\n");
    
    // Login
    while (1) {
        printf("Enter your username: ");
        scanf("%s", inputUsername);
        printf("Enter your password: ");
        scanf("%s", inputPassword);
        
        if (strcmp(username, inputUsername) == 0 && strcmp(password, inputPassword) == 0) {
            printf("Welcome %s, you are now logged in.\n", username);
            break;
        } else {
            printf("Incorrect username or password. Please try again.\n");
            continue;
        }
    }

    return 0;
}