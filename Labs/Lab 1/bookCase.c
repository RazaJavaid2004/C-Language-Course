#include <stdio.h>

int main() {
    int height, width;
    int depth = 12; // Depth in inches
    int shelves = 3; // Number of shelves

    printf("Enter the height (in inches): ");
    scanf("%d", &height);
    printf("Enter the width (in inches): ");
    scanf("%d", &width);

    int verticalBoards = 2 * (height + depth);
    int horizontalBoards = 2 * (width + depth);
    int totalBoards = verticalBoards + horizontalBoards + shelves;
    double totalBoardsInFeet = totalBoards / 12.0;

    printf("Vertical boards needed: %d\n", verticalBoards);
    printf("Horizontal boards needed: %d\n", horizontalBoards);
    printf("Total boards needed: %.2f feet\n", totalBoardsInFeet);

    return 0;
}