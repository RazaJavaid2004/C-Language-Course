#include <stdio.h>
#include <string.h>
#include <ctype.h>

int maxFrequency(char* str);

int main() {
    char name[100];
    char courses[500];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter the courses offered in Fall 2021 (separated by commas): ");
    fgets(courses, sizeof(courses), stdin);
    courses[strcspn(courses, "\n")] = '\0';

    printf("Maximum frequency of characters in your name: %d\n", maxFrequency(name));
    printf("Maximum frequency of characters in the courses: %d\n", maxFrequency(courses));

    return 0;
}

int maxFrequency(char* str) {
    int freq[256] = {0};
    int maxFreq = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            freq[ch]++;
            if (freq[ch] > maxFreq) {
                maxFreq = freq[ch];
            }
        }
    }
    return maxFreq;
}