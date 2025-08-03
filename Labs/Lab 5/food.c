#include <stdio.h>

int main() {
    int foodnum, quantity, total = 0;
    char choice;

    printf("Here is the Menu: \n");
    printf("B for Burger (Rs 200) \n");
    printf("F for French Fries (Rs 50) \n");
    printf("P for Pizza (Rs 500) \n");
    printf("S for Sandwich (Rs 150) \n");

    printf("Enter Number of Items you tend to order: ");
    scanf("%d", &foodnum);

    for(int i = 1; i <= foodnum; i++) {
        printf("Enter the Number %d food item: ", i);
        scanf(" %c", &choice);

        printf("Enter Quantity of the food item: ");
        scanf("%d", &quantity);

        switch(choice) {
            case 'B':
            case 'b':
            total += 200 * quantity;
            break;
            case 'F':
            case 'f':
            total += 50 * quantity;
            break;
            case 'P':
            case 'p':
            total += 500 * quantity;
            break;
            case 'S':
            case 's':
            total += 150 * quantity;
            break;
            default:
            printf("Invalid choice!\n");
        }
    }

    printf("Total Cost: %d \n", total);
    printf("Thank You!");

    return 0;
}