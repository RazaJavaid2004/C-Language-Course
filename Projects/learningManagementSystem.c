/*
a basic Library Management System in C that includes functionalities such as adding a book,
displaying all books, updating book details, deleting a book, saving to a file, and loading from a file.
This will help manage a collection of books efficiently.
*/

#include <stdio.h>
#include <string.h>

// Define the Book struct
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};

// Function prototypes
void addBook(struct Book books[], int *count);
void displayBooks(struct Book books[], int count);
void updateBook(struct Book books[], int count);
void deleteBook(struct Book books[], int *count);
void saveToFile(struct Book books[], int count);
void loadFromFile(struct Book books[], int *count);

int main() {
    struct Book books[100];
    int count = 0;
    int choice;

    loadFromFile(books, &count);

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Update Book\n");
        printf("4. Delete Book\n");
        printf("5. Save to File\n");
        printf("6. Load from File\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                updateBook(books, count);
                break;
            case 4:
                deleteBook(books, &count);
                break;
            case 5:
                saveToFile(books, count);
                break;
            case 6:
                loadFromFile(books, &count);
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

void addBook(struct Book books[], int *count) {
    printf("Enter book ID: ");
    scanf("%d", &books[*count].id);
    printf("Enter book title: ");
    scanf(" %[^\n]s", books[*count].title);
    printf("Enter author name: ");
    scanf(" %[^\n]s", books[*count].author);
    printf("Enter year of publication: ");
    scanf("%d", &books[*count].year);
    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book books[], int count) {
    printf("\nBook List:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Title: %s, Author: %s, Year: %d\n", books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

void updateBook(struct Book books[], int count) {
    int id, found = 0;
    printf("Enter book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Enter new title: ");
            scanf(" %[^\n]s", books[i].title);
            printf("Enter new author: ");
            scanf(" %[^\n]s", books[i].author);
            printf("Enter new year of publication: ");
            scanf("%d", &books[i].year);
            printf("Book updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

void deleteBook(struct Book books[], int *count) {
    int id, found = 0;
    printf("Enter book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (books[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Book deleted successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

void saveToFile(struct Book books[], int count) {
    FILE *file = fopen("books.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(books, sizeof(struct Book), count, file);
    fclose(file);
    printf("Records saved to file successfully!\n");
}

void loadFromFile(struct Book books[], int *count) {
    FILE *file = fopen("books.dat", "rb");
    if (file == NULL) {
        printf("No previous records found.\n");
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(books, sizeof(struct Book), *count, file);
    fclose(file);
    printf("Records loaded from file successfully!\n");
}