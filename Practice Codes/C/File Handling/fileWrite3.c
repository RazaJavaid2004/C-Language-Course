#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w");

    char name[100];
    int rollno;
    float cgpa;

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Roll No: ");
    scanf("%d", &rollno);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name: %s \n", name);
    fprintf(fptr, "Roll No: %d\n", rollno);
    fprintf(fptr, "CGPA: %.2f", cgpa);

    fclose(fptr);

    return 0;
}