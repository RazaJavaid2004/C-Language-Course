/*
Salesflow is one of leading software house they are starting their recruitment process for three 
different following positions: Associate Developer, Assistant Developer, Trainee Engineer. There 
is a defined criterion for recruitment process: if candidate clears the test with 50 marks, he will 
be selected for the post of trainee engineer; experience is not the required for this post. If 
candidate secures 60 marks with at least one year of experience and 70 marks with at least 2 
years of experience, then he/she will be selected as an assistant and associate developer, 
respectively. Write a function that takes the test marks from user and ask for experience (if the 
entered marks are x >=60). After that, function shows the assigned position.
*/

#include <stdio.h>

// Function to determine the assigned position based on marks and experience
void determinePosition() {
    int marks, experience;

    // Take the test marks from user
    printf("Enter the test marks: ");
    scanf("%d", &marks);

    // Check the marks and determine the position
    if (marks >= 70) {
        printf("Enter your years of experience: ");
        scanf("%d", &experience);
        if (experience >= 2) {
            printf("You are selected as an Associate Developer.\n");
        } else {
            printf("You do not meet the experience requirement for Associate Developer.\n");
        }
    } else if (marks >= 60) {
        printf("Enter your years of experience: ");
        scanf("%d", &experience);
        if (experience >= 1) {
            printf("You are selected as an Assistant Developer.\n");
        } else {
            printf("You do not meet the experience requirement for Assistant Developer.\n");
        }
    } else if (marks >= 50) {
        printf("You are selected as a Trainee Engineer.\n");
    } else {
        printf("You did not pass the test. Better luck next time!\n");
    }
}

int main() {
    determinePosition();
    return 0;
}