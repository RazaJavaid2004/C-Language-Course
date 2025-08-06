#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for exit() or dynamic allocation if you go that route

// Define the Task struct
struct Task {
    int id;
    char description[100]; // Max 99 characters + null terminator
    int isCompleted;       // 0 for not completed, 1 for completed
};

// Function prototypes
void clearInputBuffer(); // New helper function
void addTask(struct Task tasks[], int *count);
void viewTasks(struct Task tasks[], int count);
void updateTask(struct Task tasks[], int count);
void deleteTask(struct Task tasks[], int *count);
void saveToFile(struct Task tasks[], int count);
void loadFromFile(struct Task tasks[], int *count);

int main() {
    struct Task tasks[100]; // Still fixed size, consider dynamic allocation for a real app
    int count = 0;
    int choice;

    loadFromFile(tasks, &count); // Attempt to load tasks at startup

    do {
        printf("\n--- To-Do List Application ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Update Task\n");
        printf("4. Delete Task\n");
        printf("5. Save to File\n");
        printf("6. Load from File\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        // Input validation for choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clearInputBuffer(); // Clear buffer to prevent infinite loop
            choice = -1; // Set to an invalid choice to continue the loop
            continue;
        }
        clearInputBuffer(); // Clear any leftover newline after reading the integer

        switch (choice) {
            case 1:
                addTask(tasks, &count);
                break;
            case 2:
                viewTasks(tasks, count);
                break;
            case 3:
                updateTask(tasks, count);
                break;
            case 4:
                deleteTask(tasks, &count);
                break;
            case 5:
                saveToFile(tasks, count);
                break;
            case 6:
                loadFromFile(tasks, &count);
                break;
            case 0:
                printf("Exiting application. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 0 and 6.\n");
        }
    } while (choice != 0);

    return 0;
}

// Helper function to clear the input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void addTask(struct Task tasks[], int *count) {
    if (*count >= 100) {
        printf("Task list is full! Cannot add more tasks.\n");
        return;
    }

    printf("Enter task description (max 99 characters): ");
    // Use fgets to safely read string input and prevent buffer overflow
    // It reads up to sizeof(tasks[*count].description) - 1 characters or until newline
    if (fgets(tasks[*count].description, sizeof(tasks[*count].description), stdin) == NULL) {
        printf("Error reading description.\n");
        return;
    }
    // Remove the trailing newline character that fgets might read
    tasks[*count].description[strcspn(tasks[*count].description, "\n")] = 0;

    tasks[*count].id = *count + 1;
    tasks[*count].isCompleted = 0; // Not completed by default
    (*count)++;
    printf("Task added successfully! Task ID: %d\n", tasks[*count - 1].id);
}

void viewTasks(struct Task tasks[], int count) {
    if (count == 0) {
        printf("\nNo tasks to display. Add some tasks first!\n");
        return;
    }
    printf("\n--- Your To-Do List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Status: %-12s | Description: %s\n", tasks[i].id, tasks[i].isCompleted ? "Completed" : "Not Completed", tasks[i].description);
    }
    printf("------------------------\n");
}

void updateTask(struct Task tasks[], int count) {
    if (count == 0) {
        printf("No tasks to update. Add some tasks first!\n");
        return;
    }

    int id, found = 0;
    printf("Enter the ID of the task to update: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input. Please enter a number for the ID.\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer(); // Clear leftover newline

    for (int i = 0; i < count; i++) {
        if (tasks[i].id == id) {
            printf("Current Description: %s\n", tasks[i].description);
            printf("Enter new description (max 99 characters): ");
            if (fgets(tasks[i].description, sizeof(tasks[i].description), stdin) == NULL) {
                printf("Error reading new description.\n");
                return;
            }
            tasks[i].description[strcspn(tasks[i].description, "\n")] = 0;

            printf("Current Status: %s\n", tasks[i].isCompleted ? "Completed" : "Not Completed");
            printf("Enter new status (0 for Not Completed, 1 for Completed): ");
            int newStatus;
            if (scanf("%d", &newStatus) != 1) {
                printf("Invalid input. Please enter 0 or 1 for status.\n");
                clearInputBuffer();
                return;
            }
            clearInputBuffer(); // Clear leftover newline

            if (newStatus == 0 || newStatus == 1) {
                tasks[i].isCompleted = newStatus;
                printf("Task with ID %d updated successfully!\n", id);
                found = 1;
                break;
            } else {
                printf("Invalid status. Please enter 0 or 1.\n");
                found = 1; // Treat as found but not updated due to invalid status
                break;
            }
        }
    }
    if (!found) {
        printf("Task with ID %d not found.\n", id);
    }
}

// --- NEW FUNCTION: deleteTask ---
void deleteTask(struct Task tasks[], int *count) {
    if (*count == 0) {
        printf("No tasks to delete.\n");
        return;
    }

    int id, found = 0;
    printf("Enter the ID of the task to delete: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input. Please enter a number for the ID.\n");
        clearInputBuffer();
        return;
    }
    clearInputBuffer(); // Clear leftover newline

    for (int i = 0; i < *count; i++) {
        if (tasks[i].id == id) {
            // Shift elements to the left to overwrite the deleted task
            for (int j = i; j < *count - 1; j++) {
                tasks[j] = tasks[j + 1];
            }
            (*count)--; // Decrease the total task count
            printf("Task with ID %d deleted successfully!\n", id);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Task with ID %d not found.\n", id);
    }
}

void saveToFile(struct Task tasks[], int count) {
    FILE *file = fopen("tasks.dat", "wb"); // "wb" for write binary
    if (file == NULL) {
        printf("Error: Could not open file 'tasks.dat' for writing.\n");
        perror("Reason"); // Prints system error message
        return;
    }
    fwrite(&count, sizeof(int), 1, file);       // Write the count of tasks
    fwrite(tasks, sizeof(struct Task), count, file); // Write all tasks
    fclose(file);
    printf("Tasks saved to 'tasks.dat' successfully!\n");
}

void loadFromFile(struct Task tasks[], int *count) {
    FILE *file = fopen("tasks.dat", "rb"); // "rb" for read binary
    if (file == NULL) {
        printf("No previous tasks file ('tasks.dat') found. Starting with an empty list.\n");
        *count = 0; // Ensure count is 0 if no file is found
        return;
    }

    // Read the count first
    if (fread(count, sizeof(int), 1, file) != 1) {
        printf("Error reading task count from file.\n");
        fclose(file);
        *count = 0;
        return;
    }

    // Check if the number of tasks to load would exceed our array capacity
    if (*count > 100) {
        printf("Warning: The file contains more tasks (%d) than the program can handle (100). Loading first 100 tasks.\n", *count);
        fread(tasks, sizeof(struct Task), 100, file); // Read only up to array limit
        *count = 100;
    } else {
        // Read the actual task data
        if (fread(tasks, sizeof(struct Task), *count, file) != *count) {
            printf("Error reading task data from file. File might be corrupted.\n");
            fclose(file);
            *count = 0;
            return;
        }
    }

    fclose(file);
    printf("Tasks loaded from 'tasks.dat' successfully!\n");
}