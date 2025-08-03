#include <stdio.h>

int main() {
    int scores[5];
    int passed = 0;
    int failed = 0;
    double sum;

    printf("Enter 5 scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    for (int i = 0; i < 5; i++) {
        if (scores[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
    }

    printf("Number of Courses Passed: %d\n", passed);
    printf("Number of Courses Failed: %d\n", failed);
    printf("Average Score: %.2f\n", sum / 5.0);

    return 0;
}