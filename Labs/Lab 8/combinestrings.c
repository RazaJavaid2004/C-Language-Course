#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter First String: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter Second String: ");
    fgets(str2, 100, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int result = strcmp(str1, str2);

    if(result == 0) printf("Both Strings are equal");
    else if(result > 0) printf("%s is greater", str1);
    else printf("%s is greater", str2);

    return 0;
}