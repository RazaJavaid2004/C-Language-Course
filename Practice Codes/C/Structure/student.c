#include <stdio.h>

struct student{
    int rollno;
    char name[100];
    float gpa;
};

int main() {
    struct student s1 = {138, "Raza", 4.0};

    printf("%d \n", s1.rollno);
    printf("%s \n", s1.name);
    printf("%.1f \n", s1.gpa);

    return 0;
}