#include <stdio.h>

int main() {
    char choice;
    printf("Enter Y or y to Confirm deletion or N or n to Cancel deletion: ");
    scanf("%c", &choice);

    switch(choice) {
        case 'Y':
        case 'y':
        printf("Deleted Successfully \n");
        break;

        case 'N':
        case 'n':
        printf("Delete Cancelled \n");
        break;

        default:
        printf("Choose the Rght Opton \n");
    }
    return 0;
}