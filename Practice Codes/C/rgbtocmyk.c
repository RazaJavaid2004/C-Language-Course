#include <stdio.h>

int main() {
    int r, g, b;
    float c, m, y, k, white;

    // Prompt user for RGB input
    printf("Enter values for Red, Green, and Blue (0-255): \n");
    scanf("%d %d %d", &r, &g, &b);

    // Ensure RGB values are within range
    if ((r < 0 || r > 255) || (g < 0 || g > 255) || (b < 0 || b > 255)) {
        printf("Invalid RGB values!\n");
        return 1;
    }

    // Calculate White value
    white = (float)(r > g ? (r > b ? r : b) : (g > b ? g : b)) / 255.0;

    // Calculate CMYK values
    if (white == 0) {
        c = m = y = 0;
        k = 1;
    } else {
        c = (white - (float)r / 255.0) / white;
        m = (white - (float)g / 255.0) / white;
        y = (white - (float)b / 255.0) / white;
        k = 1 - white;
    }

    // Print CMYK values
    printf("CMYK values are: C=%.2f M=%.2f Y=%.2f K=%.2f\n", c, m, y, k);

    return 0;
}