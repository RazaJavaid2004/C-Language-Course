#include <stdio.h>
#include <ctype.h>
#include <string.h>

void uppercase(char *str);

typedef struct student {
    char name[50];
    int score;
}stu;

int main() {
    stu s[5];
    
    printf("Enter Student Details: \n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d: \n", i + 1);
        printf("Name: ");
        getchar();
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Score: ");
        scanf("%d", &s[i].score);
    }
    
    printf("\nStudent Details: \n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d \n", i + 1);
        printf("Name: %s \n", s[i].name);
        printf("Score: %d \n", s[i].score);
    }

    printf("\nStudents Name in Uppercase: \n");
    for(int i = 0; i < 5; i++) {
        uppercase(s[i].name);
        printf("Name: %s \n", s[i].name);
    }
    
    int highindex = 0;
    for(int i = 0; i < 5; i++) {
        if(s[i].score > s[highindex].score) highindex = i;
    }

    printf("\nHighest Score Achiever: \n");
    printf("Name: %s", s[highindex].name);
    printf("Score: %d", s[highindex].score);
    
    return 0;
}

void uppercase(char *str) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}