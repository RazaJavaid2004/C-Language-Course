#include <stdio.h>

int main() {
    int age;
    printf("enter age :");
    scanf("%d", &age);
    
    if( age >= 18 ) {
        printf("you are an adult \n");
    }

    else if( age > 13 && age < 18 ) {
        printf("you are a teenager \n");
    }

    else if( age > 8 && age < 13 ) {
        printf("you are a child \n");
    }

    else {
        printf("you are a kid \n");
    }

    printf("Thank you \n");
    return 0;
}