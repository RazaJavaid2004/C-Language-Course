#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int guessed_number;
    int no_of_guesses = 0;

    do {
        printf("Enter Your Guessed Number: ");
        scanf("%d", &guessed_number);

        if(guessed_number > random_number) {
            printf("Guess The Lower Number! \n");
        }
        else if(guessed_number < random_number) {
            printf("Guess The Higher Number! \n");
        }
        else {
            printf("CONGRATULATIONS!! You have Guessed The Number. \n");
        }
        no_of_guesses++;
    } while(guessed_number != random_number);

    printf("Number of Guesses: %d", no_of_guesses);
    
    return 0;
}