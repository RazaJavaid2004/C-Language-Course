#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[100];
    float gpa;
};

int main() {
    struct student csit[100];
    csit[0].rollno = 138;
    strcpy(csit[0].name, "Raza");
    csit[0].gpa = 4.0;

    printf("%d\n%s\n%.1f", csit[0].rollno, csit[0].name, csit[0].gpa);

    return 0;
}