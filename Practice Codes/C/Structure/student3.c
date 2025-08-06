#include <stdio.h>
#include <string.h>

typedef struct student {
    int rollno;
    char name[100];
    float gpa;
} stu;

int mai() {
    stu s1;
    s1.rollno = 138;
    strcpy(s1.name, "Raza");
    s1.gpa = 4.0;
    printf("%d\n%s\n%f", s1.rollno, s1.name, s1.gpa);

    return 0;  
}