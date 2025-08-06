/*
Write a program to find the grace marks for a student using switch . The user should enter the class obtained by the student and the number of
subjects he has failed in. Use the following logic:
If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. Otherwise the grace is
of 5 marks per subject.
If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. Otherwise the
grace is of 4 marks per subject.
If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. Otherwise the grace is
of 5 marks.
*/

#include <stdio.h>

int main() {
    int studentClass, failedSubjects, graceMarks = 0;

    // Prompt user for the class obtained by the student
    printf("Enter the class obtained by the student (1 for First class, 2 for Second class, 3 for Third class): ");
    scanf("%d", &studentClass);

    // Prompt user for the number of subjects failed
    printf("Enter the number of subjects the student has failed in: ");
    scanf("%d", &failedSubjects);

    // Determine grace marks using switch statement
    switch (studentClass) {
        case 1: // First class
            if (failedSubjects > 3) {
                graceMarks = 0;
            } else {
                graceMarks = 5 * failedSubjects;
            }
            break;

        case 2: // Second class
            if (failedSubjects > 2) {
                graceMarks = 0;
            } else {
                graceMarks = 4 * failedSubjects;
            }
            break;

        case 3: // Third class
            if (failedSubjects > 1) {
                graceMarks = 0;
            } else {
                graceMarks = 5 * failedSubjects;
            }
            break;

        default:
            printf("Invalid class entered.\n");
            return 1; // Exit the program if an invalid class is entered
    }

    // Display the grace marks
    printf("The grace marks awarded are: %d\n", graceMarks);

    return 0;
}