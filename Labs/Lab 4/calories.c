#include <stdio.h>

int main() {
    float calories, fatGrams, caloriesFromFat, percentageFromFat;

    printf("Enter the total number of calories: ");
    scanf("%f", &calories);
    
    if(calories < 0) {
        printf("Error: Calories cannot be less than 0.\n");
        return 1;
    }

    printf("Enter the number of fat grams: ");
    scanf("%f", &fatGrams);

    if(fatGrams < 0) {
        printf("Error: Fat grams cannot be less than 0.\n");
        return 1;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > calories) {
        printf("Error: Calories from fat cannot be greater than total calories.\n");
        return 1;
    }

    percentageFromFat = (caloriesFromFat / calories) * 100;
    printf("Percentage of calories from fat: %.2f%%\n", percentageFromFat);

    if (percentageFromFat < 30) {
        printf("This food is low in fat.\n");
    }

    return 0;
}