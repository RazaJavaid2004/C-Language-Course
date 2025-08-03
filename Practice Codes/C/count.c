#include <stdio.h>

int main() {
    int num, positivecount = 0, negativecount = 0, zerocount = 0;
    char choice;

    do{
        printf("Enter Number: ");
        scanf("%d", &num);

        if(num > 0) positivecount++;
        else if(num < 0) negativecount++;
        else zerocount++;

        printf("Do you want to enter another number? (Y/N): \n");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');

    printf("Number of Positive Numbers: %d \n", positivecount);
    printf("Number of Negative Numbers: %d \n", negativecount);
    printf("Number of Zero Numbers: %d \n", negativecount);

    return 0;
}