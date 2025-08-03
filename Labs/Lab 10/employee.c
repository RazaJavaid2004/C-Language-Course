#include <stdio.h>
#include <string.h>

typedef struct employee {
    int id;
    char name[100];
    float salary;
    char department[100];
} emp;

int main() {
    emp e1;
    
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    getchar();
    printf("Enter Employee Name: ");
    fgets(e1.name, sizeof(e1.name), stdin);
    e1.name[strcspn(e1.name, "\n")] = '\0';
    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);
    getchar();
    printf("Enter Employment Department: ");
    fgets(e1.department, sizeof(e1.department), stdin);
    e1.department[strcspn(e1.department, "\n")] = '\0';

    printf("Employee Details: \n");
    printf("ID: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Department: %s", e1.department);

    return 0;
}