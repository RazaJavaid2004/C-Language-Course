#include <stdio.h>

int main() {
    int marks[3];

    printf("Enter Marks of Math: ");
    scanf("%d", &marks[0]);

    printf("Enter Marks of English: ");
    scanf("%d", &marks[1]);

    printf("Entr Marks of Science: ");
    scanf("%d", &marks[2]);

    printf("Marks of Math: %d \n", marks[0]);
    printf("Marks of English: %d \n", marks[1]);
    printf("Marks of Science: %d \n", marks[2]);

    return 0;
}