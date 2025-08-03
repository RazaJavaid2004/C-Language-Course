#include <stdio.h>
#include <string.h>

typedef struct {
    char course_name[50];
    float course_gpa;
} course;

typedef struct {
    char street_address[100];
    char city[20];
    char state[30];
    char zip[10];
} address;

typedef struct {
    float cgpa;
    course courses[5];
    address addr;
} student;

void inputstudentdata(student *s);
void displayHighestGPA(student s1, student s2);
void displayHighestCGPA(student s1, student s2);

int main() {
    student s1, s2;
    printf("Enter Details for Student 1: \n");
    inputstudentdata(&s1);
    printf("Enter Details for Student 2: \n");
    inputstudentdata(&s2);

    displayHighestCGPA(s1, s2);
    displayHighestGPA(s1, s2);

    return 0;
}

void inputstudentdata(student *s) {
    printf("Enter CGPA: ");
    scanf("%f", &s -> cgpa);
    getchar();

    for(int i = 0; i < 5; i++) {
        printf("Enter Course Name: ");
        fgets(s -> courses[i].course_name, sizeof(s -> courses[i].course_name), stdin);
        s -> courses[i].course_name[strcspn(s -> courses[i].course_name, "\n")] = '\0';
        
        printf("Enter Course GPA: ");
        scanf("%f", &s -> courses[i].course_gpa);
        getchar();
    }

    printf("Enter Street Address: ");
    fgets(s -> addr.street_address, sizeof(s -> addr.street_address), stdin);
    s -> addr.street_address[strcspn(s -> addr.street_address, "\n")] = '\0';

    printf("Enter city: ");
    fgets(s->addr.city, sizeof(s->addr.city), stdin);
    s->addr.city[strcspn(s->addr.city, "\n")] = '\0';

    printf("Enter state: ");
    fgets(s->addr.state, sizeof(s->addr.state), stdin);
    s->addr.state[strcspn(s->addr.state, "\n")] = '\0';

    printf("Enter zip: ");
    fgets(s->addr.zip, sizeof(s->addr.zip), stdin);
    s->addr.zip[strcspn(s->addr.zip, "\n")] = '\0';
}

void displayHighestGPA(student s1, student s2) {
    printf("\nComparing courses GPA between two students...\n");
    for (int i = 0; i < 5; i++) {
        if (s1.courses[i].course_gpa > s2.courses[i].course_gpa) {
            printf("Student 1 has higher GPA in %s: %.2f\n", s1.courses[i].course_name, s1.courses[i].course_gpa);
        } else if (s2.courses[i].course_gpa > s1.courses[i].course_gpa) {
            printf("Student 2 has higher GPA in %s: %.2f\n", s2.courses[i].course_name, s2.courses[i].course_gpa);
        } else {
            printf("Both students have the same GPA in %s: %.2f\n", s1.courses[i].course_name, s1.courses[i].course_gpa);
        }
    }
}

void displayHighestCGPA(student s1, student s2) {
    printf("\nComparing CGPA between two students...\n");
    if (s1.cgpa > s2.cgpa) {
        printf("Student 1 has the highest CGPA: %.2f\n", s1.cgpa);
    } else if (s2.cgpa > s1.cgpa) {
        printf("Student 2 has the highest CGPA: %.2f\n", s2.cgpa);
    } else {
        printf("Both students have the same CGPA: %.2f\n", s1.cgpa);
    }
}