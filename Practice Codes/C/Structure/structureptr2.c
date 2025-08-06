#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    float gpa;
};

int main() {
    struct student s1 = {138, "Raza", 4.0};
    struct student *ptr = &s1;

    printf("Roll No: %d \n", ptr -> rollno);
    printf("Name: %s \n", ptr -> name);
    printf("GPA: %.1f", ptr -> gpa);

    return 0;
}