/*Student Record System
Creating a student record system in C is a fantastic way to practice working with structures,
arrays, file I/O, and basic CRUD (Create, Read, Update, Delete) operations.
Let's go step by step to build a simple console-based student record system.

Project Overview
Features:

Add a student record

Display all student records

Update a student record

Delete a student record

Save records to a file

Load records from a file

Structure Definitions: We'll define a Student struct to hold student details.
*/
#include <stdio.h>
#include <string.h>

// Define the Student struct
struct Student {
    int id;
    char name[50];
    int age;
    float gpa;
};

// Function prototypes
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void updateStudent(struct Student students[], int count);
void deleteStudent(struct Student students[], int *count);
void saveToFile(struct Student students[], int count);
void loadFromFile(struct Student students[], int *count);

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    loadFromFile(students, &count);

    do {
        printf("\nStudent Record System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Update Student\n");
        printf("4. Delete Student\n");
        printf("5. Save to File\n");
        printf("6. Load from File\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                updateStudent(students, count);
                break;
            case 4:
                deleteStudent(students, &count);
                break;
            case 5:
                saveToFile(students, count);
                break;
            case 6:
                loadFromFile(students, &count);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

void addStudent(struct Student students[], int *count) {
    printf("Enter student ID: ");
    scanf("%d", &students[*count].id);
    printf("Enter student name: ");
    scanf("%s", students[*count].name);
    printf("Enter student age: ");
    scanf("%d", &students[*count].age);
    printf("Enter student GPA: ");
    scanf("%f", &students[*count].gpa);
    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(struct Student students[], int count) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\n", students[i].id, students[i].name, students[i].age, students[i].gpa);
    }
}

void updateStudent(struct Student students[], int count) {
    int id, found = 0;
    printf("Enter student ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("Enter new name: ");
            scanf("%s", students[i].name);
            printf("Enter new age: ");
            scanf("%d", &students[i].age);
            printf("Enter new GPA: ");
            scanf("%f", &students[i].gpa);
            printf("Student updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

void deleteStudent(struct Student students[], int *count) {
    int id, found = 0;
    printf("Enter student ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Student deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", id);
    }
}

void saveToFile(struct Student students[], int count) {
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(students, sizeof(struct Student), count, file);
    fclose(file);
    printf("Records saved to file successfully!\n");
}

void loadFromFile(struct Student students[], int *count) {
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("No previous records found.\n");
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(students, sizeof(struct Student), *count, file);
    fclose(file);
    printf("Records loaded from file successfully!\n");
}