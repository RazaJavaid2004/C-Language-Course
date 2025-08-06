#include <stdio.h>

int main() {
    int matchsticks = 21, userPick, computerPick;

    while (matchsticks > 1) {
        printf("There are %d matchsticks. Pick 1, 2, 3, or 4 matchsticks: ", matchsticks);
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4) {
            printf("Invalid choice. Pick between 1 and 4 matchsticks.\n");
            continue;
        }

        matchsticks -= userPick;
        computerPick = 5 - userPick;
        printf("Computer picks %d matchsticks.\n", computerPick);
        matchsticks -= computerPick;
    }
    printf("There is 1 matchstick left. You are forced to pick it. You lose!\n");
    return 0;
}