#include <stdio.h>
#include <string.h>

void salting(char pass[]);

int main() {
    char pass[50];

    printf("Enter Your Password: ");
    scanf("%s", pass);

    salting(pass);
    
    return 0;
}

void salting(char pass[]) {
    char salt[3] = "123";
    char newpass[50];
    strcpy(newpass, pass);
    strcat(newpass, salt);

    puts(newpass);
}