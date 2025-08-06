/* Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest
   number in the list.
*/

#include <stdio.h>

int main() {
    int num, max, min, count = 0;
    char choice;

    printf("Enter a number: ");
    scanf("%d", &num);
    max = min = num;
    count++;

    do {
        printf("Enter another number: ");
        scanf("%d", &num);

        if (num > max) max = num;
        if (num < min) min = num;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (count > 1) {
        printf("Range: %d\n", max - min);
    } else {
        printf("Not enough numbers to calculate the range.\n");
    }

    return 0;
}