#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    float gpa;
};

void printinfo(struct student s1);

int main() {
    struct student s1 = {138, "Raza", 4.0};

    printinfo(s1);
    
    return 0;
}

void printinfo(struct student s1) {
    printf("Student Information: \n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("GPA: %.1f", s1.gpa);
}