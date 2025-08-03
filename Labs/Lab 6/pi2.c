#include <stdio.h>

int main() {
    double pi = 0.0;
    int num_terms = 0;
    double approximation;
    double target_values[] = {3.14, 3.141, 3.1415, 3.14159};
    int targets_found[] = {0, 0, 0, 0}; 

    for (int i = 1; i <= 100000; i++) {
        pi += (i % 2 == 1 ? 1 : -1) * 4.0 / (2 * i - 1);
        printf("Term %d: %.15f\n", i, pi);
        for (int j = 0; j < 4; j++) {
            if (!targets_found[j] && pi >= target_values[j]) {
                printf("The approximation first reaches %.5f at term %d.\n", target_values[j], i);
                targets_found[j] = 1;
            }
        }
    }
    
    return 0;
}